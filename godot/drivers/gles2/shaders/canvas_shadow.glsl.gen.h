/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef CANVAS_SHADOW_GLSL_GEN_HGLES2_120
#define CANVAS_SHADOW_GLSL_GEN_HGLES2_120


#include "drivers/gles2/shader_gles2.h"


class CanvasShadowShaderGLES2 : public ShaderGLES2 {

	 virtual String get_shader_name() const { return "CanvasShadowShaderGLES2"; }
public:

	enum Conditionals {
		USE_GLES_OVER_GL,
		USE_RGBA_SHADOWS,
	};

	enum Uniforms {
		PROJECTION_MATRIX,
		LIGHT_MATRIX,
		WORLD_MATRIX,
		DISTANCE_NORM,
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
			"#define USE_GLES_OVER_GL\n",
			"#define USE_RGBA_SHADOWS\n",
		};

		static const char* _uniform_strings[]={
			"projection_matrix",
			"light_matrix",
			"world_matrix",
			"distance_norm",
		};

		static AttributePair _attribute_pairs[]={
			{"vertex",0},
		};

		static TexUnitPair *_texunit_pairs=NULL;
		static const char _vertex_code[]={
10,35,105,102,100,101,102,32,85,83,69,95,71,76,69,83,95,79,86,69,82,95,71,76,10,35,100,101,102,105,110,101,32,108,111,119,112,10,35,100,101,102,105,110,101,32,109,101,100,105,117,109,112,10,35,100,101,102,105,110,101,32,104,105,103,104,112,10,35,101,108,115,101,10,112,114,101,99,105,115,105,111,110,32,104,105,103,104,112,32,102,108,111,97,116,59,10,112,114,101,99,105,115,105,111,110,32,104,105,103,104,112,32,105,110,116,59,10,35,101,110,100,105,102,10,10,97,116,116,114,105,98,117,116,101,32,104,105,103,104,112,32,118,101,99,51,32,118,101,114,116,101,120,59,32,47,47,32,97,116,116,114,105,98,58,48,10,10,117,110,105,102,111,114,109,32,104,105,103,104,112,32,109,97,116,52,32,112,114,111,106,101,99,116,105,111,110,95,109,97,116,114,105,120,59,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,117,110,105,102,111,114,109,32,104,105,103,104,112,32,109,97,116,52,32,108,105,103,104,116,95,109,97,116,114,105,120,59,10,117,110,105,102,111,114,109,32,104,105,103,104,112,32,109,97,116,52,32,119,111,114,108,100,95,109,97,116,114,105,120,59,10,117,110,105,102,111,114,109,32,104,105,103,104,112,32,102,108,111,97,116,32,100,105,115,116,97,110,99,101,95,110,111,114,109,59,10,10,118,97,114,121,105,110,103,32,104,105,103,104,112,32,118,101,99,52,32,112,111,115,105,116,105,111,110,95,105,110,116,101,114,112,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,112,114,111,106,101,99,116,105,111,110,95,109,97,116,114,105,120,32,42,32,40,108,105,103,104,116,95,109,97,116,114,105,120,32,42,32,40,119,111,114,108,100,95,109,97,116,114,105,120,32,42,32,118,101,99,52,40,118,101,114,116,101,120,44,32,49,46,48,41,41,41,59,10,9,112,111,115,105,116,105,111,110,95,105,110,116,101,114,112,32,61,32,103,108,95,80,111,115,105,116,105,111,110,59,10,125,10,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,102,102,32,42,47,10,		0};

		static const int _vertex_code_start=2;
		static const char _fragment_code[]={
10,35,105,102,100,101,102,32,85,83,69,95,71,76,69,83,95,79,86,69,82,95,71,76,10,35,100,101,102,105,110,101,32,108,111,119,112,10,35,100,101,102,105,110,101,32,109,101,100,105,117,109,112,10,35,100,101,102,105,110,101,32,104,105,103,104,112,10,35,101,108,115,101,10,35,105,102,32,100,101,102,105,110,101,100,40,85,83,69,95,72,73,71,72,80,95,80,82,69,67,73,83,73,79,78,41,10,112,114,101,99,105,115,105,111,110,32,104,105,103,104,112,32,102,108,111,97,116,59,10,112,114,101,99,105,115,105,111,110,32,104,105,103,104,112,32,105,110,116,59,10,35,101,108,115,101,10,112,114,101,99,105,115,105,111,110,32,109,101,100,105,117,109,112,32,102,108,111,97,116,59,10,112,114,101,99,105,115,105,111,110,32,109,101,100,105,117,109,112,32,105,110,116,59,10,35,101,110,100,105,102,10,35,101,110,100,105,102,10,10,118,97,114,121,105,110,103,32,104,105,103,104,112,32,118,101,99,52,32,112,111,115,105,116,105,111,110,95,105,110,116,101,114,112,59,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,10,9,104,105,103,104,112,32,102,108,111,97,116,32,100,101,112,116,104,32,61,32,40,40,112,111,115,105,116,105,111,110,95,105,110,116,101,114,112,46,122,32,47,32,112,111,115,105,116,105,111,110,95,105,110,116,101,114,112,46,119,41,32,43,32,49,46,48,41,32,42,32,48,46,53,32,43,32,48,46,48,59,32,47,47,32,98,105,97,115,10,10,35,105,102,100,101,102,32,85,83,69,95,82,71,66,65,95,83,72,65,68,79,87,83,10,10,9,104,105,103,104,112,32,118,101,99,52,32,99,111,109,112,32,61,32,102,114,97,99,116,40,100,101,112,116,104,32,42,32,118,101,99,52,40,50,53,53,46,48,32,42,32,50,53,53,46,48,32,42,32,50,53,53,46,48,44,32,50,53,53,46,48,32,42,32,50,53,53,46,48,44,32,50,53,53,46,48,44,32,49,46,48,41,41,59,10,9,99,111,109,112,32,45,61,32,99,111,109,112,46,120,120,121,122,32,42,32,118,101,99,52,40,48,46,48,44,32,49,46,48,32,47,32,50,53,53,46,48,44,32,49,46,48,32,47,32,50,53,53,46,48,44,32,49,46,48,32,47,32,50,53,53,46,48,41,59,10,9,103,108,95,70,114,97,103,67,111,108,111,114,32,61,32,99,111,109,112,59,10,35,101,108,115,101,10,10,9,103,108,95,70,114,97,103,67,111,108,111,114,32,61,32,118,101,99,52,40,100,101,112,116,104,41,59,10,35,101,110,100,105,102,10,125,10,		0};

		static const int _fragment_code_start=30;
		setup(_conditional_strings,2,_uniform_strings,4,_attribute_pairs,1, _texunit_pairs,0,_vertex_code,_fragment_code,_vertex_code_start,_fragment_code_start);
	}

};

#endif

