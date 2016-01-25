/*
 * Copyright (C) 2012 Samsung Electronics Co.Ltd
 * Authors: YoungJun Cho <yj44.cho@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundationr
 */

#ifndef	_EXYNOS_DRM_ROTATOR_H_
#define	_EXYNOS_DRM_ROTATOR_H_

#ifdef CONFIG_DRM_EXYNOS_ROTATOR
extern int exynos_drm_rotator_exec_ioctl(struct drm_device *dev, void *data,
					 struct drm_file *file_priv);
#else
static inline int exynos_drm_rotator_exec_ioctl(struct drm_device *dev,
						void *data,
						struct drm_file *file_priv)
{
	return -ENOTTY;
}
#endif

#endif
