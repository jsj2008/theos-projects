/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_SearchRequestBase.h"

@class VK_CommonSearchResponse;

__attribute__((visibility("hidden")))
@interface VK_CommonSearchRequest : VK_SearchRequestBase {
}
@property(readonly, assign, nonatomic) VK_CommonSearchResponse* response;
-(id)internalResponseModelMapping;
-(id)internalBuildRequestCommand;
@end

