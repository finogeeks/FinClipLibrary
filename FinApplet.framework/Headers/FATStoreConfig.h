//
//  FATStoreConfig.h
//  FinApplet
//
//  Created by Haley on 2020/12/4.
//  Copyright © 2020 finogeeks. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "FATConstant.h"


@interface FATStoreConfig : NSObject

/**
 创建应用时生成的SDK Key，必填
 */
@property (nonatomic, copy) NSString *sdkKey;

/**
创建应用时生成的SDK secret，必填
*/
@property (nonatomic, copy) NSString *sdkSecret;

/**
 服务器地址，客户部署的后台地址，必填
 * 例：https://mp.finogeeks.com
 */
@property (nonatomic, copy) NSString *apiServer;

/**
 api的版本， 必填
 例：/api/v1
 */
@property (nonatomic, copy) NSString *apiPrefix;

/**
 网络接口加密类型，默认为MD5
 */
@property (nonatomic, assign) FATApiCryptType cryptType;

/**
SDK指纹
证联环境(https://open.fdep.cn/) 时必填，其他环境的不用填
*/
@property (nonatomic, copy) NSString *fingerprint;

@end
