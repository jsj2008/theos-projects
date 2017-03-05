/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FlurryWatchConnectivityDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "FlurryDataSenderDelegate.h"
#import "IFlurrySession.h"
#import "NSCoding.h"

@class NSString, NSDate, NSData, NSMutableDictionary, NSMutableArray;

@interface FlurrySession : XXUnknownSuperclass <FlurryDataSenderDelegate, FlurryWatchConnectivityDelegate, IFlurrySession, NSCoding> {
	BOOL _crashed;
	BOOL _truncated;
	BOOL _eventLogComplete;
	BOOL _eventLoggingEnabled;
	BOOL _sessionReportsOnCloseEnabled;
	BOOL _sessionReportsOnPauseEnabled;
	BOOL _crashReportingEnabled;
	BOOL _setBackgroundSessionEnabled;
	BOOL _hasSessionOriginName;
	BOOL _hasDeepLinkName;
	NSData* _crashReportData;
	NSDate* _startTime;
	NSString* _apiKey;
	NSMutableDictionary* _sessionParams;
	NSMutableDictionary* _sessionPropertyParams;
	float _accuracy;
	NSString* _appVersion;
	int _pageViewCount;
	NSDate* _endTime;
	NSDate* _resumeTime;
	NSDate* _pauseTime;
	NSMutableDictionary* _eventCounts;
	NSMutableArray* _pendingEventLog;
	NSMutableArray* _eventLog;
	NSMutableArray* _errors;
	int _totalErrorCount;
	NSString* _locale;
	NSString* _timeZone;
	int _gender;
	int _serializationVersion;
	NSString* _userID;
	int _appApplicationState;
	NSString* _sessionOriginName;
	NSString* _deepLinkName;
	NSString* _watchAppVersion;
	int _watchEventThreshold;
	int _watchDurationThreshold;
	NSMutableArray* _purchaseItems;
	NSDate* _lastPartialUploadTime;
	NSDate* _age;
	NSMutableArray* _transactionRequests;
	double _latitude;
	double _longitude;
	long long _totalPauseIntervalMillis;
}
@property(assign, nonatomic) long long totalPauseIntervalMillis;
@property(retain, nonatomic) NSMutableArray* eventLog;
@property(retain, nonatomic) NSMutableDictionary* eventCounts;
@property(retain, nonatomic) NSDate* endTime;
@property(assign, nonatomic) int pageViewCount;
@property(copy, nonatomic) NSString* appVersion;
@property(retain, nonatomic) NSData* crashReportData;
@property(assign) BOOL crashed;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* transactionRequests;
@property(assign, nonatomic) int watchDurationThreshold;
@property(assign, nonatomic) int watchEventThreshold;
@property(retain, nonatomic) NSString* watchAppVersion;
@property(copy, nonatomic) NSString* deepLinkName;
@property(copy, nonatomic) NSString* sessionOriginName;
@property(assign, nonatomic) BOOL hasDeepLinkName;
@property(assign, nonatomic) BOOL hasSessionOriginName;
@property(assign, nonatomic) int appApplicationState;
@property(assign, nonatomic) BOOL setBackgroundSessionEnabled;
@property(assign, nonatomic) BOOL crashReportingEnabled;
@property(assign, nonatomic) BOOL sessionReportsOnPauseEnabled;
@property(assign, nonatomic) BOOL sessionReportsOnCloseEnabled;
@property(assign, nonatomic) BOOL eventLoggingEnabled;
@property(copy, nonatomic) NSString* userID;
@property(assign, nonatomic) int serializationVersion;
@property(retain, nonatomic) NSString* timeZone;
@property(retain, nonatomic) NSString* locale;
@property(retain, nonatomic) NSDate* age;
@property(assign, nonatomic) int gender;
@property(assign, nonatomic) int totalErrorCount;
@property(retain, nonatomic) NSMutableArray* errors;
@property(assign, nonatomic) BOOL eventLogComplete;
@property(retain, nonatomic) NSMutableArray* pendingEventLog;
@property(assign, nonatomic) BOOL truncated;
@property(assign, nonatomic) float accuracy;
@property(assign, nonatomic) double longitude;
@property(assign, nonatomic) double latitude;
@property(retain) NSString* apiKey;
@property(retain, nonatomic) NSMutableDictionary* sessionPropertyParams;
@property(retain, nonatomic) NSMutableDictionary* sessionParams;
@property(retain) NSDate* pauseTime;
@property(retain) NSDate* resumeTime;
@property(retain) NSDate* lastPartialUploadTime;
@property(retain) NSDate* startTime;
@property(retain, nonatomic) NSMutableArray* purchaseItems;
+(int)getBatteryState;
+(void)disableTransferOfFlurryInfo;
+(void)disableWatchConnectivity;
+(id)initialTimestampFilePath;
+(id)oldInitialTimestampFilePathUptilAgentVersion109;
+(id)currentWatchAutoIncrementFilePath;
+(id)currentWatchSessionFilePath;
+(id)currentSessionFilePath;
+(void)removeCurrentSessionFile;
+(id)sessionsFilePath;
+(id)removeOldSessionsIfNecessary:(id)necessary;
+(void)addToSavedSessions:(id)savedSessions;
+(void)setSavedSessions:(id)sessions;
+(id)savedSessions;
+(id)sessionId;
+(id)currentSession;
+(void)cleanup;
+(void)setupCurrentSessionWithKey:(id)key;
+(id)sessionWithApiKey:(id)apiKey startTime:(id)time withPreCacheEventLog:(id)preCacheEventLog;
+(id)getFlurryVersion;
+(id)getAgentVersion;
+(id)getAgentVersionWithBuild;
-(void).cxx_destruct;
-(void)dealloc;
-(void)transferIDs;
-(id)installationIDAsBytes;
-(id)installationIDForSessionReport;
-(void)migrateInstallIDFromDiskToKeychain;
-(void)removeInstallationIDFromKeychain;
-(long long)sessionLength;
-(long long)timeIntervalSinceSessionStart:(id)start;
-(BOOL)sentReportSuccessful;
-(id)initialTimestamp;
-(BOOL)isPaused;
-(id)dataForSessions:(id)sessions;
-(void)getSessionParametersAtPhase:(int)phase callSite:(int)site;
-(id)data;
-(int)updateIfTrackedAndChangedPropertyValue:(id)value forPropertyKey:(id)propertyKey;
-(void)sendSessionsToServerIncludingCurrentSession:(BOOL)serverIncludingCurrentSession;
-(void)sendSessionsToServerForCreateSession;
-(BOOL)flurryUserInfo:(id)info;
-(BOOL)isFlurryUserInfo:(id)info;
-(void)saveToDisk;
-(void)mergeValidPendingEventLog;
-(void)mergePendingEventLog;
-(int)putEventIntoLog:(id)log;
-(void)recordError:(id)error message:(id)message exceptionString:(id)string errorType:(int)type liveReport:(id)report;
-(void)recordError:(id)error message:(id)message error:(id)error3 liveReport:(id)report;
-(void)recordError:(id)error message:(id)message exception:(id)exception liveReport:(id)report;
-(void)recordTransaction:(id)transaction statusCallback:(id)callback;
-(void)endTimedEvents;
-(void)endTimedEvent:(id)event withParameters:(id)parameters;
-(int)recordEvent:(id)event withParameters:(id)parameters timed:(BOOL)timed transaction:(id)transaction;
-(int)recordEvent:(id)event withParameters:(id)parameters timed:(BOOL)timed;
-(int)totalEventCount;
-(int)recordEvent:(id)event withParameters:(id)parameters;
-(void)uploadPartialSessionDataIfNeeded:(BOOL)needed;
-(void)setAgeInYears:(int)years;
-(void)setGenderAsString:(id)string;
-(void)setLatitude:(double)latitude longitude:(double)longitude horizontalAccuracy:(float)accuracy verticalAccuracy:(float)accuracy4;
-(id)initWithCoder:(id)coder;
-(id)init;
-(void)encodeWithCoder:(id)coder;
-(void)resetEventLogs;
-(id)dataForSending:(id)sending;
-(void)maybeIncrementPageView;
-(void)finishSession;
-(void)endSession;
-(void)archiveSession;
-(void)resumeSession;
-(void)markSessionAsResuming;
-(void)pauseSession;
-(void)resetSessionData;
-(id)initWithAPIKey:(id)apikey appVersion:(id)version startDate:(id)date;
-(void)endSessionAsync;
-(BOOL)needToSendPartialReport;
-(id)sessionWithNewEventsWithApiKey:(id)apiKey startTime:(id)time;
@end

