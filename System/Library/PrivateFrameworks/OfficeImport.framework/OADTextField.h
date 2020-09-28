/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADTextRun.h>

@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {

	NSString* mText;
	OADParagraphProperties* mParagraphProperties;

}
-(unsigned long long)characterCount;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)init;
-(BOOL)isEmpty;
-(id)paragraphProperties;
-(void)removeUnnecessaryOverrides;
@end
