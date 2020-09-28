/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties;

@interface WDRunWithCharacterProperties : WDRun {

	WDCharacterProperties* mProperties;

}

@property (retain) WDCharacterProperties * properties; 
@property (getter=isHidden,readonly) BOOL hidden; 
-(void)setProperties:(WDCharacterProperties *)arg1 ;
-(void)clearProperties;
-(BOOL)isHidden;
-(WDCharacterProperties *)properties;
-(id)initWithParagraph:(id)arg1 ;
@end
