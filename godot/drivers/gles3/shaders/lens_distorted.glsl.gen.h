/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef LENS_DISTORTED_GLSL_GEN_HGLES3_120
#define LENS_DISTORTED_GLSL_GEN_HGLES3_120


#include "drivers/gles3/shader_gles3.h"


class LensDistortedShaderGLES3 : public ShaderGLES3 {

	 virtual String get_shader_name() const { return "LensDistortedShaderGLES3"; }
public:

	enum Uniforms {
		OFFSET,
		SCALE,
		EYE_CENTER,
		K1,
		K2,
		UPSCALE,
		ASPECT_RATIO,
	};

	_FORCE_INLINE_ int get_uniform(Uniforms p_uniform) const { return _get_uniform(p_uniform); }

	#ifdef DEBUG_ENABLED
 	#define _FU if (get_uniform(p_uniform)<0) return; if (!is_version_valid()) return; ERR_FAIL_COND( get_active()!=this ); 

 	#else
 	#define _FU if (get_uniform(p_uniform)<0) return; 

 	#endif
	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, float p_value) { _FU glUniform1f(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, double p_value) { _FU glUniform1f(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, uint8_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, int8_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, uint16_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, int16_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, uint32_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, int32_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Color& p_color) { _FU GLfloat col[4]={p_color.r,p_color.g,p_color.b,p_color.a}; glUniform4fv(get_uniform(p_uniform),1,col); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Vector2& p_vec2) { _FU GLfloat vec2[2]={p_vec2.x,p_vec2.y}; glUniform2fv(get_uniform(p_uniform),1,vec2); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Size2i& p_vec2) { _FU GLint vec2[2]={p_vec2.x,p_vec2.y}; glUniform2iv(get_uniform(p_uniform),1,vec2); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Vector3& p_vec3) { _FU GLfloat vec3[3]={p_vec3.x,p_vec3.y,p_vec3.z}; glUniform3fv(get_uniform(p_uniform),1,vec3); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, float p_a, float p_b) { _FU glUniform2f(get_uniform(p_uniform),p_a,p_b); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, float p_a, float p_b, float p_c) { _FU glUniform3f(get_uniform(p_uniform),p_a,p_b,p_c); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, float p_a, float p_b, float p_c, float p_d) { _FU glUniform4f(get_uniform(p_uniform),p_a,p_b,p_c,p_d); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Transform& p_transform) {  _FU

		const Transform &tr = p_transform;

		GLfloat matrix[16]={ /* build a 16x16 matrix */
			tr.basis.elements[0][0],
			tr.basis.elements[1][0],
			tr.basis.elements[2][0],
			0,
			tr.basis.elements[0][1],
			tr.basis.elements[1][1],
			tr.basis.elements[2][1],
			0,
			tr.basis.elements[0][2],
			tr.basis.elements[1][2],
			tr.basis.elements[2][2],
			0,
			tr.origin.x,
			tr.origin.y,
			tr.origin.z,
			1
		};


                glUniformMatrix4fv(get_uniform(p_uniform),1,false,matrix);


	}

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Transform2D& p_transform) {  _FU

		const Transform2D &tr = p_transform;

		GLfloat matrix[16]={ /* build a 16x16 matrix */
			tr.elements[0][0],
			tr.elements[0][1],
			0,
			0,
			tr.elements[1][0],
			tr.elements[1][1],
			0,
			0,
			0,
			0,
			1,
			0,
			tr.elements[2][0],
			tr.elements[2][1],
			0,
			1
		};


        glUniformMatrix4fv(get_uniform(p_uniform),1,false,matrix);


	}

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const CameraMatrix& p_matrix) {  _FU

		GLfloat matrix[16];

		for (int i=0;i<4;i++) {
			for (int j=0;j<4;j++) {

				matrix[i*4+j]=p_matrix.matrix[i][j];
			}
		}

		glUniformMatrix4fv(get_uniform(p_uniform),1,false,matrix);
}

#undef _FU


	virtual void init() {

		static const char **_conditional_strings=NULL;
		static const char* _uniform_strings[]={
			"offset",
			"scale",
			"eye_center",
			"k1",
			"k2",
			"upscale",
			"aspect_ratio",
		};

		static AttributePair *_attribute_pairs=NULL;
		static const Feedback* _feedbacks=NULL;
		static TexUnitPair _texunit_pairs[]={
			{"source",0},
		};

		static UBOPair *_ubo_pairs=NULL;
		static const char _vertex_code[]={
10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,105,110,32,104,105,103,104,112,32,118,101,99,52,32,118,101,114,116,101,120,95,97,116,116,114,105,98,59,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,10,117,110,105,102,111,114,109,32,118,101,99,50,32,111,102,102,115,101,116,59,10,117,110,105,102,111,114,109,32,118,101,99,50,32,115,99,97,108,101,59,10,10,111,117,116,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,10,9,117,118,95,105,110,116,101,114,112,32,61,32,118,101,114,116,101,120,95,97,116,116,114,105,98,46,120,121,32,42,32,50,46,48,32,45,32,49,46,48,59,10,10,9,118,101,99,50,32,118,32,61,32,118,101,114,116,101,120,95,97,116,116,114,105,98,46,120,121,32,42,32,115,99,97,108,101,32,43,32,111,102,102,115,101,116,59,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,118,101,99,52,40,118,44,32,48,46,48,44,32,49,46,48,41,59,10,125,10,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,102,102,32,42,47,10,		0};

		static const int _vertex_code_start=2;
		static const char _fragment_code[]={
10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,59,32,47,47,116,101,120,117,110,105,116,58,48,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,10,117,110,105,102,111,114,109,32,118,101,99,50,32,101,121,101,95,99,101,110,116,101,114,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,107,49,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,107,50,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,117,112,115,99,97,108,101,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,97,115,112,101,99,116,95,114,97,116,105,111,59,10,10,105,110,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,118,101,99,52,32,102,114,97,103,95,99,111,108,111,114,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,118,101,99,50,32,99,111,111,114,100,115,32,61,32,117,118,95,105,110,116,101,114,112,59,10,9,118,101,99,50,32,111,102,102,115,101,116,32,61,32,99,111,111,114,100,115,32,45,32,101,121,101,95,99,101,110,116,101,114,59,10,10,9,47,47,32,116,97,107,101,32,97,115,112,101,99,116,32,114,97,116,105,111,32,105,110,116,111,32,97,99,99,111,117,110,116,10,9,111,102,102,115,101,116,46,121,32,47,61,32,97,115,112,101,99,116,95,114,97,116,105,111,59,10,10,9,47,47,32,100,105,115,116,111,114,116,10,9,118,101,99,50,32,111,102,102,115,101,116,95,115,113,32,61,32,111,102,102,115,101,116,32,42,32,111,102,102,115,101,116,59,10,9,102,108,111,97,116,32,114,97,100,105,117,115,95,115,113,32,61,32,111,102,102,115,101,116,95,115,113,46,120,32,43,32,111,102,102,115,101,116,95,115,113,46,121,59,10,9,102,108,111,97,116,32,114,97,100,105,117,115,95,115,52,32,61,32,114,97,100,105,117,115,95,115,113,32,42,32,114,97,100,105,117,115,95,115,113,59,10,9,102,108,111,97,116,32,100,105,115,116,111,114,116,105,111,110,95,115,99,97,108,101,32,61,32,49,46,48,32,43,32,40,107,49,32,42,32,114,97,100,105,117,115,95,115,113,41,32,43,32,40,107,50,32,42,32,114,97,100,105,117,115,95,115,52,41,59,10,9,111,102,102,115,101,116,32,42,61,32,100,105,115,116,111,114,116,105,111,110,95,115,99,97,108,101,59,10,10,9,47,47,32,114,101,97,112,112,108,121,32,97,115,112,101,99,116,32,114,97,116,105,111,10,9,111,102,102,115,101,116,46,121,32,42,61,32,97,115,112,101,99,116,95,114,97,116,105,111,59,10,10,9,47,47,32,97,100,100,32,111,117,114,32,101,121,101,32,99,101,110,116,101,114,32,98,97,99,107,32,105,110,10,9,99,111,111,114,100,115,32,61,32,111,102,102,115,101,116,32,43,32,101,121,101,95,99,101,110,116,101,114,59,10,9,99,111,111,114,100,115,32,47,61,32,117,112,115,99,97,108,101,59,10,10,9,47,47,32,97,110,100,32,99,104,101,99,107,32,111,117,114,32,99,111,108,111,114,10,9,105,102,32,40,99,111,111,114,100,115,46,120,32,60,32,45,49,46,48,32,124,124,32,99,111,111,114,100,115,46,121,32,60,32,45,49,46,48,32,124,124,32,99,111,111,114,100,115,46,120,32,62,32,49,46,48,32,124,124,32,99,111,111,114,100,115,46,121,32,62,32,49,46,48,41,32,123,10,9,9,102,114,97,103,95,99,111,108,111,114,32,61,32,118,101,99,52,40,48,46,48,44,32,48,46,48,44,32,48,46,48,44,32,49,46,48,41,59,10,9,125,32,101,108,115,101,32,123,10,9,9,99,111,111,114,100,115,32,61,32,40,99,111,111,114,100,115,32,43,32,118,101,99,50,40,49,46,48,41,41,32,47,32,118,101,99,50,40,50,46,48,41,59,10,9,9,102,114,97,103,95,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,44,32,99,111,111,114,100,115,44,32,48,46,48,41,59,10,9,125,10,125,10,		0};

		static const int _fragment_code_start=21;
		setup(_conditional_strings,0,_uniform_strings,7,_attribute_pairs,0, _texunit_pairs,1,_ubo_pairs,0,_feedbacks,0,_vertex_code,_fragment_code,_vertex_code_start,_fragment_code_start);
	}

};

#endif

