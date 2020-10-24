#include "core\Vector.h"

vec2 vecDot(vec2 vec, float num)
{
	vec.x *= num;
	vec.y *= num;
	return vec2(vec);
}

vec3 vecDot(vec3 vec, float num)
{
	vec.x *= num;
	vec.y *= num;
	vec.z *= num;
	return vec3(vec);
}

vec4 vecDot(vec4 vec, float num)
{
	vec.x *= num;
	vec.y *= num;
	vec.z *= num;
	vec.w *= num;

	return vec4(vec);
}

vec2 vecAdd(vec2 vec, vec2 num)
{
	vec.x += num.x;
	vec.y += num.y;

	return vec2(vec);
}

vec3 vecAdd(vec3 vec, vec3 num)
{
	vec.x += num.x;
	vec.y += num.y;
	vec.z += num.z;

	return vec3(vec);
}

vec4 vecAdd(vec4 vec, vec4 num)
{
	vec.x += num.x;
	vec.y += num.y;
	vec.z += num.z;
	vec.w += num.w;

	return vec4(vec);
}

vec2 vecSub(vec2 vec, vec2 num)
{
	vec.x -= num.x;
	vec.y -= num.y;

	return vec2(vec);
}

vec3 vecSub(vec3 vec, vec3 num)
{
	vec.x -= num.x;
	vec.y -= num.y;
	vec.z -= num.z;

	return vec3(vec);
}

vec4 vecSub(vec4 vec, vec4 num)
{
	vec.x -= num.x;
	vec.y -= num.y;
	vec.z -= num.z;
	vec.w -= num.w;

	return vec4(vec);
}

vec2 vecMul(vec2 vec, vec2 num)
{
	vec.x *= num.x;
	vec.y *= num.y;

	return vec2(vec);
}

vec3 vecMul(vec3 vec, vec3 num)
{
	vec.x *= num.x;
	vec.y *= num.y;
	vec.z *= num.z;

	return vec3(vec);
}

vec4 vecMul(vec4 vec, vec4 num)
{
	vec.x *= num.x;
	vec.y *= num.y;
	vec.z *= num.z;
	vec.w *= num.w;

	return vec4(vec);
}

BOOL vecLessThan(vec2 vec, vec2 num)
{
	if ((vec.x < num.x) && (vec.y < num.y))
		return true;
	else
		return false;
}

BOOL vecLessThan(vec3 vec, vec3 num)
{
	if ((vec.x < num.x) && (vec.y < num.y) && (vec.z < num.z))
		return true;
	else
		return false;
}

BOOL vecLessThan(vec4 vec, vec4 num)
{
	if ((vec.x < num.x) && (vec.y < num.y) && (vec.z < num.z) && (vec.w < num.w))
		return true;
	else
		return false;
}

BOOL vecGreaterThan(vec2 vec, vec2 num)
{
	if ((vec.x > num.x) && (vec.y > num.y))
		return true;
	else
		return false;
}

BOOL vecGreaterThan(vec3 vec, vec3 num)
{
	if ((vec.x > num.x) && (vec.y > num.y) && (vec.z > num.z))
		return true;
	else
		return false;
}

BOOL vecGreaterThan(vec4 vec, vec4 num)
{
	if ((vec.x > num.x) && (vec.y > num.y) && (vec.z > num.z) && (vec.w > num.w))
		return true;
	else
		return false;
}

BOOL vecEqual(vec2 vec, vec2 num)
{
	if ((vec.x == num.x) && (vec.y == num.y))
		return true;
	else
		return false;
}

BOOL vecEqual(vec3 vec, vec3 num)
{
	if ((vec.x == num.x) && (vec.y == num.y) && (vec.z == num.z))
		return true;
	else
		return false;
}

BOOL vecEqual(vec4 vec, vec4 num)
{
	if ((vec.x == num.x) && (vec.y == num.y) && (vec.z == num.z) && (vec.w == num.w))
		return true;
	else
		return false;
}

// Leagecy code Definations

vec2 vec2Dot(vec2 vec, float num)
{
	vec.x *= num;
	vec.y *= num;

	return vec;
}

vec3 vec3Dot(vec3 vec, float num)
{
	vec.x *= num;
	vec.y *= num;
	vec.z *= num;

	return vec;
}

vec4 vec4Dot(vec4 vec, float num)
{
	vec.x *= num;
	vec.y *= num;
	vec.z *= num;
	vec.w *= num;

	return vec;
}

vec2 vec2Add(vec2 vec, vec2 num)
{
	vec.x += num.x;
	vec.y += num.y;

	return vec;
}

vec3 vec3Add(vec3 vec, vec3 num)
{
	vec.x+=num.x;
	vec.y+=num.y;
	vec.z+=num.z;

	return vec;
}

vec4 vec4Add(vec4 vec, vec4 num)
{
	vec.x += num.x;
	vec.y += num.y;
	vec.z += num.z;
	vec.w += num.w;

	return vec;
}

vec2 vec2Sub(vec2 vec, vec2 num)
{
	vec.x -= num.x;
	vec.y -= num.y;

	return vec;
}

vec3 vec3Sub(vec3 vec, vec3 num)
{
	vec.x -= num.x;
	vec.y -= num.y;
	vec.z -= num.z;

	return vec;
}

vec4 vec4Sub(vec4 vec, vec4 num)
{
	vec.x -= num.x;
	vec.y -= num.y;
	vec.z -= num.z;
	vec.w -= num.w;

	return vec;
}

vec2 vec2Mul(vec2 vec, vec2 num)
{
	vec.x *= num.x;
	vec.y *= num.y;

	return vec;
}

vec3 vec3Mul(vec3 vec, vec3 num)
{
	vec.x *= num.x;
	vec.y *= num.y;
	vec.z *= num.z;

	return vec;
}

vec4 vec4Mul(vec4 vec, vec4 num)
{
	vec.x *= num.x;
	vec.y *= num.y;
	vec.z *= num.z;
	vec.w *= num.w;

	return vec;
}

BOOL vec2LessThan(vec2 vec, vec2 num)
{
	if ((vec.x < num.x) && (vec.y < num.y))
		return true;
	else
		return false;
}

BOOL vec3LessThan(vec3 vec, vec3 num)
{
	if ((vec.x < num.x) && (vec.y < num.y) && (vec.z < num.z))
		return true;
	else
		return false;
}

BOOL vec4LessThan(vec4 vec, vec4 num)
{
	if ((vec.x < num.x) && (vec.y < num.y) && (vec.z < num.z) && (vec.w < num.w))
		return true;
	else
		return false;
}

BOOL vec2GreaterThan(vec2 vec, vec2 num)
{
	if ((vec.x > num.x) && (vec.y > num.y))
		return true;
	else
		return false;
}

BOOL vec3GreaterThan(vec3 vec, vec3 num)
{
	if ((vec.x > num.x) && (vec.y > num.y) && (vec.z > num.z))
		return true;
	else
		return false;
}

BOOL vec4GreaterThan(vec4 vec, vec4 num)
{
	if ((vec.x > num.x) && (vec.y > num.y) && (vec.z > num.z) && (vec.w > num.w))
		return true;
	else
		return false;
}

BOOL vec2Equal(vec2 vec, vec2 num)
{
	if ((vec.x == num.x) && (vec.y == num.y))
		return true;
	else
		return false;
}

BOOL vec3Equal(vec3 vec, vec3 num)
{
	if ((vec.x == num.x) && (vec.y == num.y) && (vec.z == num.z))
		return true;
	else
		return false;
}

BOOL vec4Equal(vec4 vec, vec4 num)
{
	if ((vec.x == num.x) && (vec.y == num.y) && (vec.z == num.z) && (vec.w == num.w))
		return true;
	else
		return false;
}
