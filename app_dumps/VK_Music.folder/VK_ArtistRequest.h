/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_PagedRequestBase.h"

@class NSString, VK_ArtistResponse;

__attribute__((visibility("hidden")))
@interface VK_ArtistRequest : VK_PagedRequestBase {
	NSString* _artistId;
}
@property(readonly, assign, nonatomic) VK_ArtistResponse* response;
@property(retain, nonatomic) NSString* artistId;
-(void).cxx_destruct;
-(id)internalResponseModelMapping;
-(void)internalInitRequestParams:(id)params;
-(id)internalBuildRequestCommand;
-(void)internalValidateParams;
@end

