/**
 * @file        BitmapHeader.h
 * @brief       ビットマップヘッダ定義
 * @author      Keitetsu
 * @date        2010/08/01
 * @copyright   Copyright (c) 2010 Keitetsu
 * @par         License
 *              This software is released under the MIT License.
 */

#pragma once    /* __BITMAPHEADER_H__ */

#include <stdint.h>


#define BITMAPFILEHEADER_SIZE   (14)    /**< ビットマップファイルヘッダのサイズ */
#define BITMAPINFOHEADER_SIZE   (40)    /**< ビットマップ情報ヘッダのサイズ */


/**
 * @struct  tagBITMAPFILEHEADER
 * @brief   ビットマップファイルヘッダ構造体
 *
 * @typedef BITMAPFILEHEADER
 * @brief   ビットマップファイルヘッダ構造体
 */
typedef struct tagBITMAPFILEHEADER {
    uint16_t    bfType;         /**< ファイルタイプ */
    uint32_t    bfSize;         /**< ファイルサイズ */
    uint16_t    bfReserved1;    /**< 予約領域1 */
    uint16_t    bfReserved2;    /**< 予約領域2 */
    uint32_t    bfOffBits;      /**< 画素データまでのオフセット */
} BITMAPFILEHEADER, *PBITMAPFILEHEADER;


/**
 * @struct  tagBITMAPINFOHEADER
 * @brief   ビットマップ情報ヘッダ構造体
 *
 * @typedef BITMAPINFOHEADER
 * @brief   ビットマップ情報ヘッダ構造体
 */
typedef struct tagBITMAPINFOHEADER {
    uint32_t    biSize;         /**< ヘッダのサイズ */
    int32_t     biWidth;        /**< 画像の幅 */
    int32_t     biHeight;       /**< 画像の高さ */
    uint16_t    biPlanes;       /**< プレーン数 */
    uint16_t    biBitCount;     /**< 1画素あたりのサイズ */
    uint32_t    biCompression;  /**< 圧縮形式 */
    uint32_t    biSizeImage;    /**< 画素データのサイズ */
    int32_t     biXPixPerMeter; /**< 幅方向解像度 */
    int32_t     biYPixPerMeter; /**< 高さ方向解像度 */
    uint32_t    biClrUsed;      /**< カラーテーブル数 */
    uint32_t    biClrImportant; /**< 重要なカラーテーブル数 */
} BITMAPINFOHEADER, *PBITMAPINFOHEADER;
