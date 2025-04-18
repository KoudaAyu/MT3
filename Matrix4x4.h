#pragma once
#include"Struct.h"
#include"Const.h"
#include"Novice.h"
#include<cmath>


/// <summary>
/// 行列の加法
/// </summary>
/// <param name="m1">1つ目のMatrix</param>
/// <param name="m2">2つ目のMatrix</param>
/// <returns>計算結果</returns>
Matrix4x4 Add(Matrix4x4 m1, Matrix4x4 m2);

/// <summary>
/// 行列の減法
/// <param name="m1">1つ目のMatrix</param>
/// <param name="m2">2つ目のMatrix</param>
/// <returns>計算結果</returns>
Matrix4x4 Subtract(Matrix4x4 m1, Matrix4x4 m2);

/// <summary>
/// 
/// </summary>
/// <param name="m1">1つ目のMatrix</param>
/// <param name="m2">2つ目のMatrix</param>
/// <returns>計算結果</returns>
Matrix4x4 Multiply(Matrix4x4 m1, Matrix4x4 m2);

/// <summary>
/// 逆行列
/// </summary>
/// <param name="m">Matrix</param>
/// <returns>計算結果</returns>
Matrix4x4 Inverse(Matrix4x4 m);

/// <summary>
/// 
/// </summary>
/// <param name="m"></param>
/// <returns>計算結果</returns>
Matrix4x4 Transpose(Matrix4x4 m);

/// <summary>
/// 
/// </summary>
/// <returns>計算結果</returns>
Matrix4x4 MakeIdentity4x4();

/// <summary>
/// 平行移動行列
/// </summary>
/// <param name="translate"></param>
/// <returns></returns>
Matrix4x4 MakeTranslateMatrix(const Vector3& translate);

/// <summary>
/// 拡大縮小行列
/// </summary>
/// <param name="scale"></param>
/// <returns></returns>
Matrix4x4 MakeScaleMatrix(const Vector3& scale);

/// <summary>
/// 座標変換
/// </summary>
/// <param name="vector"></param>
/// <param name="matrix"></param>
/// <returns></returns>
Vector3 VectorTransform(const Vector3& vector,const Matrix4x4& matrix);

/// <summary>
/// X軸回転行列
/// </summary>
/// <param name="radian"></param>
/// <returns></returns>
Matrix4x4 MakeRotateXMatrix(float radian);


/// <summary>
/// Y軸回転行列
/// </summary>
/// <param name="radian"></param>
/// <returns></returns>
Matrix4x4 MakeRotateYMatrix(float radian);

/// <summary>
/// Z軸回転行列
/// </summary>
/// <param name="radian"></param>
/// <returns></returns>
Matrix4x4 MakeRotateZMatrix(float radian);

void MatrixScreenPrintf(int x, int y, const Matrix4x4 matrix, const char* label);

void VectorScreenPrintf(int x, int y, const Vector3 vector, const char* label);