/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_PagedRequestBase.h"

@class NSString, VK_TracksResponse;

__attribute__((visibility("hidden")))
@interface VK_SimilarTracksRequest : VK_PagedRequestBase {
	NSString* _trackId;
}
@property(readonly, assign, nonatomic) VK_TracksResponse* response;
@property(retain, nonatomic) NSString* trackId;
-(void).cxx_destruct;
-(id)internalResponseModelMapping;
-(void)internalInitRequestParams:(id)params;
-(id)internalBuildRequestCommand;
-(void)internalValidateParams;
-(BOOL)internalCachingSupported;
@end

