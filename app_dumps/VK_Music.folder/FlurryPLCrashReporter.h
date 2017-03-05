/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VK_Music-Structs.h"

@class FlurryPLCrashMachExceptionPortSet, FlurryPLCrashReporterConfig, NSString, FlurryPLCrashMachExceptionServer;

@interface FlurryPLCrashReporter : XXUnknownSuperclass {
	FlurryPLCrashReporterConfig* _config;
	BOOL _enabled;
	FlurryPLCrashMachExceptionServer* _machServer;
	FlurryPLCrashMachExceptionPortSet* _previousMachPorts;
	NSString* _applicationIdentifier;
	NSString* _applicationVersion;
	NSString* _applicationMarketingVersion;
	NSString* _crashReportDirectory;
}
+(id)sharedReporter;
+(void)initialize;
-(void)setCrashCallbacks:(PLCrashReporterCallbacks*)callbacks;
-(id)generateLiveReportAndReturnError:(id*)error;
-(id)generateLiveReport;
-(id)generateLiveReportWithThread:(unsigned)thread error:(id*)error;
-(id)generateLiveReportWithThread:(unsigned)thread;
-(BOOL)enableCrashReporterAndReturnError:(id*)error;
-(BOOL)enableCrashReporter;
-(BOOL)purgePendingCrashReportAndReturnError:(id*)error;
-(BOOL)purgePendingCrashReport;
-(id)loadPendingCrashReportDataAndReturnError:(id*)error;
-(id)loadPendingCrashReportData;
-(BOOL)hasPendingCrashReport;
-(id)initWithConfiguration:(id)configuration;
-(id)init;
-(id)crashReportPath;
-(id)queuedCrashReportDirectory;
-(id)crashReportDirectory;
-(BOOL)populateCrashReportDirectoryAndReturnError:(id*)error;
-(int)mapToAsyncSymbolicationStrategy:(unsigned)asyncSymbolicationStrategy;
-(void)dealloc;
-(id)enableMachExceptionServerWithPreviousPortSet:(id*)previousPortSet callback:(/*function-pointer*/ void*)callback context:(void*)context error:(id*)error;
-(id)initWithBundle:(id)bundle configuration:(id)configuration;
-(id)initWithApplicationIdentifier:(id)applicationIdentifier appVersion:(id)version appMarketingVersion:(id)version3 configuration:(id)configuration;
@end

