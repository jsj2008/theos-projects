/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDateFormatter, IndexRestriction, NSNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface VKMDateFormatterImpl : XXUnknownSuperclass {
	int timezoneOffset;
	double localOffset;
	double day;
	double year;
	double nextYear;
	BOOL metricSystem;
	BOOL enabledAMPM;
	BOOL _langRU;
	BOOL _langBE;
	BOOL _langUK;
	BOOL _langPT;
	BOOL _langES;
	BOOL _localeRU;
	IndexRestriction* _index;
	NSString* _language;
	int _lang;
	NSDateFormatter* _fYesterday;
	NSDateFormatter* _fYearFull;
	NSDateFormatter* _fBday;
	NSDateFormatter* _fRelative;
	NSDateFormatter* _fEventFull;
	NSDateFormatter* _fDay;
	NSDateFormatter* _fWeek;
	NSDateFormatter* _fWeekFull;
	NSDateFormatter* _fYear;
	NSDateFormatter* _fDef;
	NSDateFormatter* _fDefFull;
	NSDateFormatter* _fBirthday;
	NSNumberFormatter* _fDistance;
	NSString* _formatTimeTomorrow;
	NSString* _formatTimeToday;
	NSString* _formatTimeYesterday;
	NSString* _formatTimeFull;
	NSString* _formatTimePT1HRTomorrow;
	NSString* _formatTimePT1HRToday;
	NSString* _formatTimePT1HRYesterday;
	NSString* _formatTimePT1HRFull;
	NSString* _tokenNow;
	NSString* _tokenSecond1;
	NSString* _tokenSecond1d;
	NSString* _tokenSecond234;
	NSString* _tokenSecondN;
	NSString* _tokenMinute1;
	NSString* _tokenMinute1d;
	NSString* _tokenMinute234;
	NSString* _tokenMinuteN;
	NSString* _tokenHour1;
	NSString* _tokenHour1d;
	NSString* _tokenHour234;
	NSString* _tokenHourN;
	NSString* _formatUpdated;
	NSString* _tokenUpdatedNow;
	NSString* _formatUpdatedMasculine;
	NSString* _tokenUpdatedNowMasculine;
}
@property(retain, nonatomic) NSDateFormatter* fEventFull;
@property(retain, nonatomic) NSDateFormatter* fRelative;
@property(retain, nonatomic) NSDateFormatter* fBday;
@property(retain, nonatomic) NSDateFormatter* fYearFull;
@property(retain, nonatomic) NSDateFormatter* fYesterday;
@property(assign, nonatomic) BOOL localeRU;
@property(assign, nonatomic) BOOL langES;
@property(assign, nonatomic) BOOL langPT;
@property(assign, nonatomic) BOOL langUK;
@property(assign, nonatomic) BOOL langBE;
@property(assign, nonatomic) BOOL langRU;
@property(assign, nonatomic) int lang;
@property(retain, nonatomic) NSString* language;
@property(retain, nonatomic) IndexRestriction* index;
@property(retain, nonatomic) NSString* tokenUpdatedNowMasculine;
@property(retain, nonatomic) NSString* formatUpdatedMasculine;
@property(retain, nonatomic) NSString* tokenUpdatedNow;
@property(retain, nonatomic) NSString* formatUpdated;
@property(retain, nonatomic) NSString* tokenHourN;
@property(retain, nonatomic) NSString* tokenHour234;
@property(retain, nonatomic) NSString* tokenHour1d;
@property(retain, nonatomic) NSString* tokenHour1;
@property(retain, nonatomic) NSString* tokenMinuteN;
@property(retain, nonatomic) NSString* tokenMinute234;
@property(retain, nonatomic) NSString* tokenMinute1d;
@property(retain, nonatomic) NSString* tokenMinute1;
@property(retain, nonatomic) NSString* tokenSecondN;
@property(retain, nonatomic) NSString* tokenSecond234;
@property(retain, nonatomic) NSString* tokenSecond1d;
@property(retain, nonatomic) NSString* tokenSecond1;
@property(retain, nonatomic) NSString* tokenNow;
@property(retain, nonatomic) NSString* formatTimePT1HRFull;
@property(retain, nonatomic) NSString* formatTimePT1HRYesterday;
@property(retain, nonatomic) NSString* formatTimePT1HRToday;
@property(retain, nonatomic) NSString* formatTimePT1HRTomorrow;
@property(retain, nonatomic) NSString* formatTimeFull;
@property(retain, nonatomic) NSString* formatTimeYesterday;
@property(retain, nonatomic) NSString* formatTimeToday;
@property(retain, nonatomic) NSString* formatTimeTomorrow;
@property(retain, nonatomic) NSNumberFormatter* fDistance;
@property(retain, nonatomic) NSDateFormatter* fBirthday;
@property(retain, nonatomic) NSDateFormatter* fDefFull;
@property(retain, nonatomic) NSDateFormatter* fDef;
@property(retain, nonatomic) NSDateFormatter* fYear;
@property(retain, nonatomic) NSDateFormatter* fWeekFull;
@property(retain, nonatomic) NSDateFormatter* fWeek;
@property(retain, nonatomic) NSDateFormatter* fDay;
+(BOOL)disabledUntilActive:(id)active;
+(id)futureServerDate:(id)date;
+(id)applicationPreferredLanguage;
+(id)supportedLanguages;
-(void).cxx_destruct;
-(id)distance:(double)distance;
-(int)age:(id)age;
-(id)birthday:(id)birthday isShort:(BOOL)aShort;
-(id)from:(int)from to:(int)to;
-(id)updatedAgoWithToken:(id)token format:(id)format date:(id)date;
-(id)updatedAgoMasculine:(id)masculine;
-(id)updatedAgo:(id)ago;
-(id)briefApproxTimeAgo:(unsigned)ago;
-(id)created:(unsigned)created pretty:(BOOL)pretty;
-(id)created:(unsigned)created;
-(id)groupFounded:(unsigned)founded;
-(id)monthNames;
-(id)relativeDateTime:(id)time;
-(id)dayTime:(id)time;
-(id)sectionStringForAPIDate:(unsigned)apidate;
-(id)messageStringForAPIDate:(unsigned)apidate;
-(id)dialogStringForAPIDate:(unsigned)apidate;
-(int)serverTimeFromLocalDate:(id)localDate;
-(unsigned)fakeAPITime;
-(unsigned)localUTCOffset;
-(void)syncWithServerTime:(unsigned)serverTime;
-(id)initWithLang:(id)lang locale:(id)locale bundle:(id)bundle;
@end

