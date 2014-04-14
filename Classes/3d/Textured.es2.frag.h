static const char* baseTexturedFrag = STRINGIFY(
//for Windows platform(Win7&Win8 desktop), codes like #ifdef would cause glew.dll crash 
/*
#ifdef GL_ES
varying lowp vec4 DestinationColor;
varying mediump vec2 TextureCoordOut;
#else
varying vec4 DestinationColor;
varying vec2 TextureCoordOut;
#endif
*/

varying lowp vec4 DestinationColor;
varying mediump vec2 TextureCoordOut;

uniform sampler2D Sampler;

void main(void)
{
    gl_FragColor = texture2D(Sampler, TextureCoordOut) * DestinationColor;
}
);
