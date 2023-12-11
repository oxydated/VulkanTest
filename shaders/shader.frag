#version 450

layout(location = 0) in dvec3 inPosition;
layout(location = 2) in vec3 inColor;

layout(location = 3) out vec4 outColor;

void main(){
	outColor = vec4(inColor, 1.0);
}
