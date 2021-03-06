static const uint8_t vs_tonemap_glsl[1403] =
{
	0x56, 0x53, 0x48, 0x03, 0xdb, 0xe3, 0xfb, 0xec, 0x02, 0x00, 0x0b, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x07, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, // wTexel.......u_m
	0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x09, 0x01, 0x00, 0x00, // odelViewProj....
	0x01, 0x00, 0x44, 0x05, 0x00, 0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, // ..D...attribute 
	0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, // highp vec3 a_pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, // ition;.attribute
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x61, 0x5f, 0x74, 0x65, //  highp vec2 a_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, // xcoord0;.varying
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, //  highp vec2 v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, // xcoord0;.varying
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, //  highp vec4 v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x31, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, // xcoord1;.varying
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, //  highp vec4 v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, // xcoord2;.varying
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, //  highp vec4 v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x33, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, // xcoord3;.varying
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, //  highp vec4 v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x34, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // xcoord4;.uniform
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, //  highp vec4 u_vi
	0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // ewTexel;.uniform
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, //  highp mat4 u_mo
	0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x76, 0x6f, 0x69, // delViewProj;.voi
	0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, // d main ().{.  hi
	0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ghp float tmpvar
	0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, // _1;.  tmpvar_1 =
	0x20, 0x28, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x2e, 0x78, 0x20, //  (u_viewTexel.x 
	0x2a, 0x20, 0x36, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, // * 6.0);.  highp 
	0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, // vec4 tmpvar_2;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, //  tmpvar_2.w = 1.
	0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, // 0;.  tmpvar_2.xy
	0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, // z = a_position;.
	0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, //   gl_Position = 
	0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, // (u_modelViewProj
	0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x3b, 0x0a, 0x20, 0x20, //  * tmpvar_2);.  
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x61, 0x5f, // v_texcoord0 = a_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, // texcoord0;.  hig
	0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, // hp vec4 tmpvar_3
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x78, 0x20, 0x3d, // ;.  tmpvar_3.x =
	0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, //  (a_texcoord0.x 
	0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, // - tmpvar_1);.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, // mpvar_3.y = a_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // xcoord0.y;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, // var_3.z = (a_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // coord0.x + tmpva
	0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, // r_1);.  tmpvar_3
	0x2e, 0x77, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // .w = a_texcoord0
	0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // .y;.  v_texcoord
	0x31, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, // 1 = tmpvar_3;.  
	0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // highp vec4 tmpva
	0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, // r_4;.  tmpvar_4.
	0x78, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // x = (a_texcoord0
	0x2e, 0x78, 0x20, 0x2d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, // .x - (tmpvar_1 *
	0x20, 0x32, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, //  2.0));.  tmpvar
	0x5f, 0x34, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // _4.y = a_texcoor
	0x64, 0x30, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, // d0.y;.  tmpvar_4
	0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // .z = (a_texcoord
	0x30, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, // 0.x + (tmpvar_1 
	0x2a, 0x20, 0x32, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // * 2.0));.  tmpva
	0x72, 0x5f, 0x34, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // r_4.w = a_texcoo
	0x72, 0x64, 0x30, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // rd0.y;.  v_texco
	0x6f, 0x72, 0x64, 0x32, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, // ord2 = tmpvar_4;
	0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, // .  highp vec4 tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_5;.  tmpvar
	0x5f, 0x35, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // _5.x = (a_texcoo
	0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // rd0.x - (tmpvar_
	0x31, 0x20, 0x2a, 0x20, 0x33, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // 1 * 3.0));.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, // var_5.y = a_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // oord0.y;.  tmpva
	0x72, 0x5f, 0x35, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // r_5.z = (a_texco
	0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ord0.x + (tmpvar
	0x5f, 0x31, 0x20, 0x2a, 0x20, 0x33, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // _1 * 3.0));.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, // pvar_5.w = a_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, // coord0.y;.  v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x33, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // xcoord3 = tmpvar
	0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, // _5;.  highp vec4
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, //  tmpvar_6;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, // var_6.x = (a_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, // coord0.x - (tmpv
	0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x34, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // ar_1 * 4.0));.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, // tmpvar_6.y = a_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // excoord0.y;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, // pvar_6.z = (a_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x6d, 0x70, // xcoord0.x + (tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x34, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, // var_1 * 4.0));. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x61, 0x5f, //  tmpvar_6.w = a_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x76, // texcoord0.y;.  v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x34, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, // _texcoord4 = tmp
	0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                               // var_6;.}...
};
static const uint8_t vs_tonemap_dx9[653] =
{
	0x56, 0x53, 0x48, 0x03, 0xdb, 0xe3, 0xfb, 0xec, 0x02, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x09, 0x01, 0x00, 0x00, 0x04, 0x00, // elViewProj......
	0x0b, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x05, 0x01, 0x04, 0x00, // .u_viewTexel....
	0x01, 0x00, 0x58, 0x02, 0x00, 0x03, 0xfe, 0xff, 0xfe, 0xff, 0x2f, 0x00, 0x43, 0x54, 0x41, 0x42, // ..X......./.CTAB
	0x1c, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x02, 0x00, 0x00, 0x00, // ................
	0x1c, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, // ............D...
	0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........T.......
	0x64, 0x00, 0x00, 0x00, 0x02, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, // d...........p...
	0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, // ....u_modelViewP
	0x72, 0x6f, 0x6a, 0x00, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, // roj.............
	0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, // ....u_viewTexel.
	0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, // vs_3_0.Microsoft
	0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, //  (R) HLSL Shader
	0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, 0x32, 0x39, 0x2e, 0x39, //  Compiler 9.29.9
	0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x51, 0x00, 0x00, 0x05, 0x05, 0x00, 0x0f, 0xa0, // 52.3111.Q.......
	0x00, 0x00, 0xc0, 0x40, 0x00, 0x00, 0x40, 0x41, 0x00, 0x00, 0x90, 0x41, 0x00, 0x00, 0xc0, 0x41, // ...@..@A...A...A
	0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, // ................
	0x05, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, // ................
	0x00, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, 0x03, 0xe0, // ................
	0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x01, 0x80, 0x02, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, // ................
	0x05, 0x00, 0x02, 0x80, 0x03, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x03, 0x80, // ................
	0x04, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x04, 0x80, 0x05, 0x00, 0x0f, 0xe0, // ................
	0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x55, 0x90, // ..............U.
	0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0x90, // ................
	0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x02, 0x00, 0xe4, 0xa0, // ................
	0x00, 0x00, 0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0xe0, // ................
	0x00, 0x00, 0xe4, 0x80, 0x03, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x01, 0x00, 0x03, 0xe0, // ................
	0x01, 0x00, 0xe4, 0x90, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x04, 0x00, 0x00, 0xa0, // ................
	0x04, 0x00, 0x00, 0x04, 0x01, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x80, 0x05, 0x00, 0xe4, 0xa1, // ................
	0x01, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0x02, 0x02, 0x00, 0x01, 0xe0, 0x01, 0x00, 0x00, 0x80, // ................
	0x01, 0x00, 0x00, 0x02, 0x02, 0x00, 0x0a, 0xe0, 0x01, 0x00, 0x55, 0x90, 0x04, 0x00, 0x00, 0x04, // ..........U.....
	0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x80, 0x05, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x90, // ................
	0x01, 0x00, 0x00, 0x02, 0x02, 0x00, 0x04, 0xe0, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x02, // ................
	0x03, 0x00, 0x01, 0xe0, 0x01, 0x00, 0x55, 0x80, 0x01, 0x00, 0x00, 0x02, 0x03, 0x00, 0x0a, 0xe0, // ......U.........
	0x01, 0x00, 0x55, 0x90, 0x01, 0x00, 0x00, 0x02, 0x03, 0x00, 0x04, 0xe0, 0x00, 0x00, 0x55, 0x80, // ..U...........U.
	0x01, 0x00, 0x00, 0x02, 0x04, 0x00, 0x01, 0xe0, 0x01, 0x00, 0xaa, 0x80, 0x01, 0x00, 0x00, 0x02, // ................
	0x05, 0x00, 0x01, 0xe0, 0x01, 0x00, 0xff, 0x80, 0x01, 0x00, 0x00, 0x02, 0x04, 0x00, 0x0a, 0xe0, // ................
	0x01, 0x00, 0x55, 0x90, 0x01, 0x00, 0x00, 0x02, 0x04, 0x00, 0x04, 0xe0, 0x00, 0x00, 0xaa, 0x80, // ..U.............
	0x01, 0x00, 0x00, 0x02, 0x05, 0x00, 0x04, 0xe0, 0x00, 0x00, 0xff, 0x80, 0x01, 0x00, 0x00, 0x02, // ................
	0x05, 0x00, 0x0a, 0xe0, 0x01, 0x00, 0x55, 0x90, 0xff, 0xff, 0x00, 0x00, 0x00,                   // ......U......
};
static const uint8_t vs_tonemap_dx11[1028] =
{
	0x56, 0x53, 0x48, 0x03, 0xdb, 0xe3, 0xfb, 0xec, 0x02, 0x00, 0x0b, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x05, 0x00, 0x10, 0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, // wTexel.......u_m
	0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x09, 0x00, 0xe0, 0x09, // odelViewProj....
	0x04, 0x00, 0xc8, 0x03, 0x44, 0x58, 0x42, 0x43, 0x38, 0xe3, 0x30, 0x81, 0x6c, 0xfe, 0xe7, 0x0a, // ....DXBC8.0.l...
	0x8c, 0x61, 0x78, 0x03, 0xe6, 0xed, 0x57, 0x67, 0x01, 0x00, 0x00, 0x00, 0xc8, 0x03, 0x00, 0x00, // .ax...Wg........
	0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x38, 0x01, 0x00, 0x00, // ....,.......8...
	0x49, 0x53, 0x47, 0x4e, 0x4c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // ISGNL...........
	0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // 8...............
	0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........A.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, // ................
	0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, // POSITION.TEXCOOR
	0x44, 0x00, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0xb0, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, // D...OSGN........
	0x08, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x03, 0x0c, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, // ................
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ................
	0x0f, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, // ................
	0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // ................
	0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, // ....SV_POSITION.
	0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, // TEXCOORD....SHDR
	0x88, 0x02, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0xa2, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, // ....@.......Y...
	0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa2, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, // F. ........._...
	0x72, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, // r......._...2...
	0x01, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....g.... ......
	0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x32, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ....e...2 ......
	0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, // e.... ......e...
	0xf2, 0x20, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, // . ......e.... ..
	0x04, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, // ....e.... ......
	0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, // h.......8.......
	0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, // ....V.......F. .
	0x00, 0x00, 0x00, 0x00, 0x9f, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, // ........2.......
	0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0x00, 0x00, 0x00, // ....F. .........
	0x06, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ........F.......
	0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, // 2...........F. .
	0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xa6, 0x1a, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xf2, 0x20, 0x10, 0x00, // F............ ..
	0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, // ....F.......F. .
	0x00, 0x00, 0x00, 0x00, 0xa1, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x32, 0x20, 0x10, 0x00, // ........6...2 ..
	0x01, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, // ....F.......6...
	0xa2, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // . ......V.......
	0x32, 0x00, 0x00, 0x0e, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0x20, 0x80, // 2............. .
	0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, // A............@..
	0x00, 0x00, 0xc0, 0x40, 0x00, 0x00, 0x40, 0x41, 0x00, 0x00, 0x90, 0x41, 0x00, 0x00, 0xc0, 0x41, // ...@..@A...A...A
	0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x12, 0x20, 0x10, 0x00, // ........6.... ..
	0x02, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0d, // ............2...
	0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // .......... .....
	0x01, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x40, 0x00, 0x00, 0x40, 0x41, // .....@.....@..@A
	0x00, 0x00, 0x90, 0x41, 0x00, 0x00, 0xc0, 0x41, 0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ...A...A........
	0x36, 0x00, 0x00, 0x05, 0x42, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, // 6...B ..........
	0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0xa2, 0x20, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, // ....6.... ......
	0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x12, 0x20, 0x10, 0x00, // V.......6.... ..
	0x03, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, // ............6...
	0x42, 0x20, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // B ..............
	0x36, 0x00, 0x00, 0x05, 0x12, 0x20, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, // 6.... ......*...
	0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x12, 0x20, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, // ....6.... ......
	0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x42, 0x20, 0x10, 0x00, // :.......6...B ..
	0x04, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, // ....*.......6...
	0x42, 0x20, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // B ......:.......
	0x36, 0x00, 0x00, 0x05, 0xa2, 0x20, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, // 6.... ......V...
	0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0xa2, 0x20, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, // ....6.... ......
	0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x02, 0x01, 0x00, // V.......>.......
	0x10, 0x00, 0xb0, 0x0d,                                                                         // ....
};
