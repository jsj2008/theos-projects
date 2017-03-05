/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class FlurryWatchConnectivityProxy, WCSession;
@protocol FlurryWatchConnectivityDelegate;

@interface FlurryWatchConnectivity : XXUnknownSuperclass {
	BOOL _disabled;
	BOOL _disableTransferInfo;
	BOOL _kvoSetup;
	id<FlurryWatchConnectivityDelegate> _delegate;
	Class _wcsession;
	FlurryWatchConnectivityProxy* _connectivityProxy;
	WCSession* _session;
}
@property(assign, nonatomic) __weak id<FlurryWatchConnectivityDelegate> delegate;
@property(assign, nonatomic) BOOL kvoSetup;
@property(assign, nonatomic) BOOL disableTransferInfo;
@property(assign, nonatomic) BOOL disabled;
@property(assign, nonatomic) __weak WCSession* session;
@property(retain) FlurryWatchConnectivityProxy* connectivityProxy;
@property(assign, nonatomic) Class wcsession;
+(id)defaultConnectivty;
-(void).cxx_destruct;
-(void)removeKVO;
-(void)setupKVO;
-(void)checkNewDelegate:(id)delegate;
-(void)setSessionDelegate:(id)delegate;
-(void)restoreCachedSessionDelegate;
-(void)cacheAndReplaceSessionDelegate;
-(void)activateSession;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)disableTransferFlurryInfo;
-(void)disableWatchConnectivity;
-(void)transferUserInfo:(id)info;
-(void)teardown;
-(void)setup;
-(id)init;
@end

