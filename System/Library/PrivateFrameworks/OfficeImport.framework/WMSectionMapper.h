/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDSection;

@interface WMSectionMapper : CMMapper {

	WDSection* wdSection;
	float mTopMargin;
	float mLeftMargin;
	BOOL mBreakAtStart;
	BOOL mBreakAtEnd;
	BOOL mIsTitlePage;

}
+(BOOL)isContentEmpty:(id)arg1 ;
-(float)leftMargin;
-(float)topMargin;
-(void)setLeftMargin:(float)arg1 ;
-(void)setTopMargin:(float)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDSection:(id)arg1 breakAtStart:(BOOL)arg2 breakAtEnd:(BOOL)arg3 parent:(id)arg4 ;
-(void)MapSectionStyleAt:(id)arg1 ;
-(void)mapHeaderAt:(id)arg1 withState:(id)arg2 ;
-(void)mapFooterAt:(id)arg1 withState:(id)arg2 ;
@end

