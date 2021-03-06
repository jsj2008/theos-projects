/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VKUtil : XXUnknownSuperclass {
}
+(id)installationIdentifier;
+(id)autoplayParams:(id)params;
+(id)autoplaySettingValue:(id)value;
+(id)connectionParams:(id)params;
+(id)connectionParams;
+(id)profileLongPressMenu:(id)menu url:(id)url;
+(id)urlLongPressMenu:(id)menu;
+(id)phoneLongPressMenu:(id)menu;
+(id)clientAdsParameters;
+(id)clientEnvironmentParameters;
+(id)commentReplyTextForSource:(id)source;
+(id)textWithOldMentions:(id)oldMentions;
+(id)humanizedURL:(id)url;
+(id)safeScreenName:(id)name oid:(id)oid;
+(id)strippedAPNSToken:(id)token;
+(id)trimmedSendText:(id)text;
+(id)mentionForSource:(id)source;
+(id)mentionForUser:(id)user;
+(id)sendingBodyForText:(id)text;
+(id)sendingBodyForRawText:(id)rawText;
+(id)urlSchemeForAppId:(id)appId;
+(id)URLForNote:(id)note;
+(id)URLForPage:(id)page;
+(id)escapedTitleForPage:(id)page;
+(id)eventForGroup:(id)group inStore:(id)store;
+(id)birthdayEventForProfile:(id)profile inStore:(id)store;
+(void)requestAccessEventStore:(id)store type:(unsigned)type handler:(id)handler;
+(id)dropTime:(id)time;
+(id)dropYear:(id)year;
+(BOOL)isServiceVKURL:(id)vkurl;
+(id)safeBrowserURL:(id)url ref:(id)ref;
+(id)safeBrowserURL:(id)url;
+(id)passwordRestoreURL;
+(BOOL)isVKURLDomain:(id)domain;
+(BOOL)isVKURL:(id)vkurl;
+(id)VKStringURLForLink:(id)link;
+(id)VKURLForUid:(id)uid;
+(id)VKURLForScreenNameFull:(id)screenNameFull;
+(id)VKURLForSourceId:(int)sourceId;
+(id)VKShortURLForScreenName:(id)screenName;
+(id)VKURLForScreenName:(id)screenName;
+(id)sourceIDFromURL:(id)url;
+(void)setup;
@end

