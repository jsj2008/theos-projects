/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FlurryDataSenderBase.h"
#import "FlurryHttpAsyncTaskDelegate.h"

@class FlurryDataSenderIndex, NSString;
@protocol FlurryDataSenderDelegate;

@interface FlurryDataSender : FlurryDataSenderBase <FlurryHttpAsyncTaskDelegate> {
	FlurryDataSenderIndex* _dataIndex;
	id<FlurryDataSenderDelegate> _dataSenderDelegate;
	Class _httpAsyncTaskClass;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) Class httpAsyncTaskClass;
@property(assign, nonatomic) __weak id<FlurryDataSenderDelegate> dataSenderDelegate;
@property(retain, nonatomic) FlurryDataSenderIndex* dataIndex;
+(id)dataKey;
+(void)cleanup;
+(id)instance;
+(void)setupInstanceWithQueue:(id)queue backgroundTracker:(id)tracker;
+(void)setupInstanceWithQueue:(id)queue;
-(void).cxx_destruct;
-(void)retransmitNotSentBlocks;
-(void)didCompleteAllTasks;
-(void)parseResponse:(id)response;
-(int)parseCookies:(id)cookies;
-(void)requestSuccessComplete:(id)complete withResponse:(id)response;
-(void)requestSuccessful:(id)successful withResponse:(id)response;
-(void)requestDidCancel:(id)request withResponse:(id)response;
-(void)requestDidFail:(id)request withResponse:(id)response;
-(void)sendSessionsData:(id)data;
-(void)sendData:(id)data withIdentifier:(id)identifier;
-(BOOL)everSentReportSuccessfully;
-(void)removeStoredDataWithIdentifier:(id)identifier;
-(id)storeData:(id)data;
-(void)setup;
-(id)initWithQueue:(id)queue backgroundTracker:(id)tracker;
-(id)initWithQueue:(id)queue;
@end

