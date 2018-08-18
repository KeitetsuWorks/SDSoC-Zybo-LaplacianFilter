/**
 * @file        lap_filter.h
 * @brief       laplacian filter
 *              m_axi offset=slave version
 * @author      marsee
 * @date        2015/08/26
 * @see         http://marsee101.blog19.fc2.com/blog-entry-3689.html
 */

#ifndef __LAP_FILTER_H__
#define __LAP_FILTER_H__


/**
 * @brief       hardware
 */
int lap_filter_axim(int *cam_fb, int *lap_fb);

#endif  /* __LAP_FILTER_H__ */
