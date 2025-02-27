//
//  MiscNetworkRequests.h
//  FLEXample
//
//  Created by Tanner on 3/12/20.
//  Copyright © 2020 Flipboard. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FLEX/FLEXHeapEnumerator.h>

NS_ASSUME_NONNULL_BEGIN

@interface MiscNetworkRequests : NSObject <NSURLConnectionDataDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSURLSessionWebSocketDelegate>

+ (void)sendExampleRequests;

@property (nonatomic, nullable) NSMutableArray<NSURLConnection *> *connections;

@end

NS_ASSUME_NONNULL_END
