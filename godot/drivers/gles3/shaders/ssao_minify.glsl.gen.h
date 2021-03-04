/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef SSAO_MINIFY_GLSL_GEN_HGLES3_120
#define SSAO_MINIFY_GLSL_GEN_HGLES3_120


#include "drivers/gles3/shader_gles3.h"


class SsaoMinifyShaderGLES3 : public ShaderGLES3 {

	 virtual String get_shader_name() const { return "SsaoMinifyShaderGLES3"; }
public:

	enum Conditionals {
		MINIFY_START,
		USE_ORTHOGONAL_PROJECTION,
	};

	enum Uniforms {
		CAMERA_Z_FAR,
		CAMERA_Z_NEAR,
		FROM_SIZE,
		SOURCE_MIPMAP,
	};

	_FORCE_INLINE_ int get_uniform(Uniforms p_uniform) const { return _get_uniform(p_uniform); }

	_FORCE_INLINE_ void set_conditional(Conditionals p_conditional,bool p_enable)  {  _set_conditional(p_conditional,p_enable); }

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

		static const char* _conditional_strings[]={
			"#define MINIFY_START\n",
			"#define USE_ORTHOGONAL_PROJECTION\n",
		};

		static const char* _uniform_strings[]={
			"camera_z_far",
			"camera_z_near",
			"from_size",
			"source_mipmap",
		};

		static AttributePair *_attribute_pairs=NULL;
		static const Feedback* _feedbacks=NULL;
		static TexUnitPair _texunit_pairs[]={
			{"source_depth",0},
		};

		static UBOPair *_ubo_pairs=NULL;
		static const char _vertex_code[]={
10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,105,110,32,104,105,103,104,112,32,118,101,99,52,32,118,101,114,116,101,120,95,97,116,116,114,105,98,59,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,118,101,114,116,101,120,95,97,116,116,114,105,98,59,10,125,10,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,102,102,32,42,47,10,		0};

		static const int _vertex_code_start=2;
		static const char _fragment_code[]={
10,35,105,102,100,101,102,32,77,73,78,73,70,89,95,83,84,65,82,84,10,10,35,100,101,102,105,110,101,32,83,68,69,80,84,72,95,84,89,80,69,32,104,105,103,104,112,32,115,97,109,112,108,101,114,50,68,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,99,97,109,101,114,97,95,122,95,102,97,114,59,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,99,97,109,101,114,97,95,122,95,110,101,97,114,59,10,10,35,101,108,115,101,10,10,35,100,101,102,105,110,101,32,83,68,69,80,84,72,95,84,89,80,69,32,109,101,100,105,117,109,112,32,117,115,97,109,112,108,101,114,50,68,10,10,35,101,110,100,105,102,10,10,117,110,105,102,111,114,109,32,83,68,69,80,84,72,95,84,89,80,69,32,115,111,117,114,99,101,95,100,101,112,116,104,59,32,47,47,116,101,120,117,110,105,116,58,48,10,10,117,110,105,102,111,114,109,32,105,118,101,99,50,32,102,114,111,109,95,115,105,122,101,59,10,117,110,105,102,111,114,109,32,105,110,116,32,115,111,117,114,99,101,95,109,105,112,109,97,112,59,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,109,101,100,105,117,109,112,32,117,105,110,116,32,100,101,112,116,104,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,10,9,105,118,101,99,50,32,115,115,80,32,61,32,105,118,101,99,50,40,103,108,95,70,114,97,103,67,111,111,114,100,46,120,121,41,59,10,10,9,47,47,32,82,111,116,97,116,101,100,32,103,114,105,100,32,115,117,98,115,97,109,112,108,105,110,103,32,116,111,32,97,118,111,105,100,32,88,89,32,100,105,114,101,99,116,105,111,110,97,108,32,98,105,97,115,32,111,114,32,90,32,112,114,101,99,105,115,105,111,110,32,98,105,97,115,32,119,104,105,108,101,32,100,111,119,110,115,97,109,112,108,105,110,103,46,10,9,47,47,32,79,110,32,68,88,57,44,32,116,104,101,32,98,105,116,45,97,110,100,32,99,97,110,32,98,101,32,105,109,112,108,101,109,101,110,116,101,100,32,119,105,116,104,32,102,108,111,97,116,105,110,103,45,112,111,105,110,116,32,109,111,100,117,108,111,10,10,35,105,102,100,101,102,32,77,73,78,73,70,89,95,83,84,65,82,84,10,9,102,108,111,97,116,32,102,100,101,112,116,104,32,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,100,101,112,116,104,44,32,99,108,97,109,112,40,115,115,80,32,42,32,50,32,43,32,105,118,101,99,50,40,115,115,80,46,121,32,38,32,49,44,32,115,115,80,46,120,32,38,32,49,41,44,32,105,118,101,99,50,40,48,41,44,32,102,114,111,109,95,115,105,122,101,32,45,32,105,118,101,99,50,40,49,41,41,44,32,115,111,117,114,99,101,95,109,105,112,109,97,112,41,46,114,59,10,9,102,100,101,112,116,104,32,61,32,102,100,101,112,116,104,32,42,32,50,46,48,32,45,32,49,46,48,59,10,35,105,102,100,101,102,32,85,83,69,95,79,82,84,72,79,71,79,78,65,76,95,80,82,79,74,69,67,84,73,79,78,10,9,102,100,101,112,116,104,32,61,32,40,40,102,100,101,112,116,104,32,43,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,43,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,32,47,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,32,42,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,32,47,32,50,46,48,59,10,35,101,108,115,101,10,9,102,100,101,112,116,104,32,61,32,50,46,48,32,42,32,99,97,109,101,114,97,95,122,95,110,101,97,114,32,42,32,99,97,109,101,114,97,95,122,95,102,97,114,32,47,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,43,32,99,97,109,101,114,97,95,122,95,110,101,97,114,32,45,32,102,100,101,112,116,104,32,42,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,59,10,35,101,110,100,105,102,10,9,102,100,101,112,116,104,32,47,61,32,99,97,109,101,114,97,95,122,95,102,97,114,59,10,9,100,101,112,116,104,32,61,32,117,105,110,116,40,99,108,97,109,112,40,102,100,101,112,116,104,32,42,32,54,53,53,51,53,46,48,44,32,48,46,48,44,32,54,53,53,51,53,46,48,41,41,59,10,10,35,101,108,115,101,10,9,100,101,112,116,104,32,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,100,101,112,116,104,44,32,99,108,97,109,112,40,115,115,80,32,42,32,50,32,43,32,105,118,101,99,50,40,115,115,80,46,121,32,38,32,49,44,32,115,115,80,46,120,32,38,32,49,41,44,32,105,118,101,99,50,40,48,41,44,32,102,114,111,109,95,115,105,122,101,32,45,32,105,118,101,99,50,40,49,41,41,44,32,115,111,117,114,99,101,95,109,105,112,109,97,112,41,46,114,59,10,35,101,110,100,105,102,10,125,10,		0};

		static const int _fragment_code_start=13;
		setup(_conditional_strings,2,_uniform_strings,4,_attribute_pairs,0, _texunit_pairs,1,_ubo_pairs,0,_feedbacks,0,_vertex_code,_fragment_code,_vertex_code_start,_fragment_code_start);
	}

};

#endif

