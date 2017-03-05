/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UIActivityIndicatorView, UIView;
@protocol VK_SearchPopularRequestsViewDelegate;

__attribute__((visibility("hidden")))
@interface VK_SearchPopularRequestsView : XXUnknownSuperclass {
	id<VK_SearchPopularRequestsViewDelegate> _delegate;
	NSArray* _popularRequests;
	NSArray* _requestsButtons;
	UIActivityIndicatorView* _activityIndicator;
	UIView* _requestsView;
	unsigned _state;
}
@property(assign, nonatomic) __weak id<VK_SearchPopularRequestsViewDelegate> delegate;
@property(assign, nonatomic) unsigned state;
@property(assign, nonatomic) __weak UIView* requestsView;
@property(assign, nonatomic) __weak UIActivityIndicatorView* activityIndicator;
@property(retain, nonatomic) NSArray* requestsButtons;
@property(retain, nonatomic) NSArray* popularRequests;
-(void).cxx_destruct;
-(void)onRequestButtonPressed:(id)pressed;
-(void)onUpdatePopularRequests:(id)requests;
-(void)updateData;
-(void)updateDataIfNeeded;
-(void)setupSearchPopularRequestsView;
-(void)awakeFromNib;
@end

