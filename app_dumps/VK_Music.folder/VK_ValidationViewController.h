/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_BaseWebViewController.h"

@class NSString;
@protocol VK_ValidationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VK_ValidationViewController : VK_BaseWebViewController {
	id<VK_ValidationViewControllerDelegate> _delegate;
	NSString* _redirectUrl;
}
@property(copy, nonatomic) NSString* redirectUrl;
@property(assign, nonatomic) __weak id<VK_ValidationViewControllerDelegate> delegate;
-(void).cxx_destruct;
-(void)finishValidationWithAccessToken:(id)accessToken;
-(id)extractAccessTokenFromUrl:(id)url;
-(BOOL)internalShouldStartLoadUrl:(id)internal;
-(void)internalCancelWebAction;
-(void)internalStartWebAction;
@end

