/***************************************************************************
 * COPYRIGHT NOTICE
 * Copyright 2019 Horizon Robotics, Inc.
 * All rights reserved.
 ***************************************************************************/

#ifndef X3_INC_HB_VIO_COMMON_H_
#define X3_INC_HB_VIO_COMMON_H_

#ifdef __cplusplus
extern "C"
{
#endif

#define HB_VIO_NO_ERR                   0

enum HB_VIO_ERROR_CODE {
    HB_VIO_PAESER_FAIL = 1,
    HB_VIO_OPEN_CFG_FAIL,
    HB_VIO_INIT_FAIL,
    HB_VIO_START_FAIL,
    HB_VIO_STOP_FAIL,
    HB_VIO_BAD_VALUE,
    HB_VIO_NULL_POINT,
    HB_VIO_TIME_OUT,
    HB_VIO_INVALID_CONFIG,
    HB_VIO_INVALID_OPERATION,
    HB_VIO_BUF_MGR_FAIL,
    HB_VIO_ENABLE_MD_FAIL,
    HB_VIO_DISABLE_MD_FAIL,
};

enum HB_VIO_DIS_ERROR_CODE {
    HB_VIO_DIS_OPEN_DEV_FAIL = 200,
    HB_VIO_DIS_INIT_FAIL,
    HB_VIO_DIS_DEINIT_FAIL,
    HB_VIO_DIS_UPDATE_FAIL,
    HB_VIO_DIS_STOP_FAIL,
    HB_VIO_DIS_START_FAIL,
    HB_VIO_DIS_PARSER_FAIL,
    HB_VIO_DIS_EPOLL_CREATE_FAIL,
    HB_VIO_DIS_EPOLL_CTL_FAIL,
    HB_VIO_DIS_EPOLL_WAIT_FAIL,
    HB_VIO_DIS_STOP_WORKING,
    HB_VIO_DIS_BAD_VALUE,
    HB_VIO_DIS_TIME_OUT,
    HB_VIO_DIS_INVALID_OPERATION,
    HB_VIO_DIS_INVALID_CONFIG
};

enum HB_VIO_ISP_ERROR_CODE {
    HB_VIO_ISP_OPEN_DEV_FAIL = 300,
    HB_VIO_ISP_INIT_FAIL,
    HB_VIO_ISP_DEINIT_FAIL,
    HB_VIO_ISP_UPDATE_FAIL,
    HB_VIO_ISP_STOP_FAIL,
    HB_VIO_ISP_START_FAIL,
    HB_VIO_ISP_PARSER_FAIL,
    HB_VIO_ISP_EPOLL_CREATE_FAIL,
    HB_VIO_ISP_EPOLL_CTL_FAIL,
    HB_VIO_ISP_EPOLL_WAIT_FAIL,
    HB_VIO_ISP_STOP_WORKING,
    HB_VIO_ISP_BAD_VALUE,
    HB_VIO_ISP_TIME_OUT,
    HB_VIO_ISP_INVALID_OPERATION,
    HB_VIO_ISP_INVALID_CONFIG,
    HB_VIO_ISP_NULL_POINT,
    HB_VIO_ISP_BUF_MGR_FAIL
};

enum HB_VIO_PYM_ERROR_CODE {
    HB_VIO_PYM_OPEN_DEV_FAIL = 400,
    HB_VIO_PYM_INIT_FAIL,
    HB_VIO_PYM_DEINIT_FAIL,
    HB_VIO_PYM_UPDATE_FAIL,
    HB_VIO_PYM_STOP_FAIL,
    HB_VIO_PYM_START_FAIL,
    HB_VIO_PYM_PARSER_FAIL,
    HB_VIO_PYM_IS_BUSY,
    HB_VIO_PYM_EPOLL_CREATE_FAIL,
    HB_VIO_PYM_EPOLL_CTL_FAIL,
    HB_VIO_PYM_EPOLL_WAIT_FAIL,
    HB_VIO_PYM_STOP_WORKING,
    HB_VIO_PYM_BAD_VALUE,
    HB_VIO_PYM_TIME_OUT,
    HB_VIO_PYM_INVALID_OPERATION,
    HB_VIO_PYM_INVALID_CONFIG,
    HB_VIO_PYM_NULL_POINT,
    HB_VIO_PYM_BUF_MGR_FAIL,
};

enum HB_VIO_GDC_ERROR_CODE {
    HB_VIO_GDC_OPEN_DEV_FAIL = 500,
    HB_VIO_GDC_INIT_FAIL,
    HB_VIO_GDC_DEINIT_FAIL,
    HB_VIO_GDC_UPDATE_FAIL,
    HB_VIO_GDC_STOP_FAIL,
    HB_VIO_GDC_START_FAIL,
    HB_VIO_GDC_PARSER_FAIL,
    HB_VIO_GDC_EPOLL_CREATE_FAIL,
    HB_VIO_GDC_EPOLL_CTL_FAIL,
    HB_VIO_GDC_EPOLL_WAIT_FAIL,
    HB_VIO_GDC_STOP_WORKING,
    HB_VIO_GDC_BUF_MGR_FAIL,
    HB_VIO_GDC_BAD_VALUE,
    HB_VIO_GDC_NULL_POINT,
    HB_VIO_GDC_PROCESS_FAIL,
    HB_VIO_GDC_GET_STATUS_FAIL
};

enum HB_VIO_LDC_ERROR_CODE {
    HB_VIO_LDC_OPEN_DEV_FAIL = 600,
    HB_VIO_LDC_INIT_FAIL,
    HB_VIO_LDC_DEINIT_FAIL,
    HB_VIO_LDC_UPDATE_FAIL,
    HB_VIO_LDC_STOP_FAIL,
    HB_VIO_LDC_START_FAIL,
    HB_VIO_LDC_PARSER_FAIL,
    HB_VIO_LDC_STOP_WORKING,
    HB_VIO_LDC_BAD_VALUE,
    HB_VIO_LDC_TIME_OUT,
    HB_VIO_LDC_INVALID_OPERATION,
    HB_VIO_LDC_INVALID_CONFIG
};

enum HB_VIO_SIF_ERROR_CODE {
    HB_VIO_SIF_OPEN_DEV_FAIL = 700,
    HB_VIO_SIF_INIT_FAIL,
    HB_VIO_SIF_UPDATE_FAIL,
    HB_VIO_SIF_STOP_FAIL,
    HB_VIO_SIF_START_FAIL,
    HB_VIO_SIF_PARSER_FAIL,
    HB_VIO_SIF_EPOLL_CREATE_FAIL,
    HB_VIO_SIF_EPOLL_CTL_FAIL,
    HB_VIO_SIF_EPOLL_WAIT_FAIL,
    HB_VIO_SIF_STOP_WORKING,//709
    HB_VIO_SIF_DEINIT_FAIL,
    HB_VIO_SIF_BAD_VALUE,
    HB_VIO_SIF_TIME_OUT,
    HB_VIO_SIF_INVALID_OPERATION,
    HB_VIO_SIF_INVALID_CONFIG,
    HB_VIO_SIF_NULL_POINT,
    HB_VIO_SIF_BUF_MGR_FAIL
};

enum HB_VIO_IPU_ERROR_CODE {
	HB_VIO_IPU_INIT_FAIL = 800,
    HB_VIO_IPU_DEINIT_FAIL,
    HB_VIO_IPU_START_FAIL,
    HB_VIO_IPU_STOP_FAIL,
    HB_VIO_IPU_PARSER_FAIL,
    HB_VIO_IPU_EPOLL_CREATE_FAIL,//805
    HB_VIO_IPU_EPOLL_CTL_FAIL,
    HB_VIO_IPU_EPOLL_WAIT_FAIL,
    HB_VIO_IPU_STOP_WORKING,
    HB_VIO_IPU_OPEN_DEV_FAIL,
    HB_VIO_IPU_UPDATE_FAIL,
    HB_VIO_IPU_BAD_VALUE,
    HB_VIO_IPU_TIME_OUT,
    HB_VIO_IPU_INVALID_OPERATION,
    HB_VIO_IPU_INVALID_CONFIG,
    HB_VIO_IPU_NULL_POINT,
    HB_VIO_IPU_CHN_NOT_ENABLE,
    HB_VIO_IPU_OPERATE_OSD_FAIL,
    HB_VIO_IPU_BUF_MGR_FAIL,
    HB_VIO_IPU_OSD_OPEN_FILE_FAIL
};

enum HB_VIO_DWE_ERROR_CODE {
    HB_VIO_DWE_NULL_POINT = 900,
    HB_VIO_DWE_PARSER_FAIL,
    HB_VIO_DWE_BAD_VALUE,
    HB_VIO_DWE_OPEN_DEV_FAIL,
    HB_VIO_DWE_INIT_FAIL,
    HB_VIO_DWE_DEINIT_FAIL,
    HB_VIO_DWE_START_FAIL,
    HB_VIO_DWE_STOP_FAIL
};

#ifdef __cplusplus
}
#endif

#endif// X3_INC_HB_VIO_COMMON_H_
