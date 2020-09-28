/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity {

	long long _sourceType;
	NSString* _sourceHost;
	NSString* _sourceOwner;

}
-(unsigned long long)isMatchForSource:(id)arg1 ;
-(BOOL)_requiresHostAndOwner;
-(BOOL)_isLocalSource;
-(BOOL)_supportsConsistentExternalIDAcrossDevices:(long long)arg1 ;
-(id)initWithSource:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)_supportsConsistentExternalIDAcrossDevices;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
@end
