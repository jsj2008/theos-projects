/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSURLSessionDelegate.h"

@class FABNetworkClient, NSString, NSTimer, CLSBetaUpdate, NSObject;
@protocol CLSBetaControllerDelegate, OS_dispatch_queue;

@interface CLSBetaController : XXUnknownSuperclass <NSURLSessionDelegate> {
	NSString* _betaToken;
	BOOL _checksSuspended;
	BOOL _retrying;
	id<CLSBetaControllerDelegate> _delegate;
	FABNetworkClient* _networkClient;
	CLSBetaUpdate* _activeUpdate;
	NSTimer* _checkSuspensionTimer;
	NSObject<OS_dispatch_queue>* _queue;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, copy, nonatomic) NSString* betaToken;
@property(assign, nonatomic) __weak id<CLSBetaControllerDelegate> delegate;
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue>* queue;
@property(assign, nonatomic) BOOL retrying;
@property(assign, nonatomic) BOOL checksSuspended;
@property(retain, nonatomic) NSTimer* checkSuspensionTimer;
@property(retain, nonatomic) CLSBetaUpdate* activeUpdate;
@property(readonly, assign, nonatomic) FABNetworkClient* networkClient;
+(id)pinnnedCertificates;
+(BOOL)isBetaSupported;
-(void).cxx_destruct;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)applicationWillEnterForeground:(id)application;
-(void)fabricSettingsDownloaded:(id)downloaded;
-(void)showBetaAlertForUpdate:(id)update;
-(void)didGetUpdate:(id)update;
-(BOOL)shouldGetUpdates;
-(void)applicationWillEnterForeground;
-(void)allowChecks;
-(void)temporarilySuspendChecks;
-(id)updateWithData:(id)data error:(id*)error;
-(void)handledCompletedBetaRequestWithData:(id)data error:(id)error completionBlock:(id)block;
-(void)loadUpdateWithCompletionBlock:(id)completionBlock;
-(void)maybeGetUpdate:(id)update;
-(void)checkForUpdate;
-(id)betaUpdateURL;
-(id)APIKey;
-(id)appInstallationSource;
-(id)appInstanceIdentifier;
-(id)appDisplayVersion;
-(id)appBuildVersion;
-(id)appBundleIdentifier;
-(id)betaEndpoint;
-(id)betaUpdateSuspendDurationSecs;
-(id)settings;
-(void)dealloc;
-(BOOL)start;
-(id)initWithDelegate:(id)delegate;
@end

