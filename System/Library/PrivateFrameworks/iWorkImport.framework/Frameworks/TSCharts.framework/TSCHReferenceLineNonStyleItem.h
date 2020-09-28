/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCHReferenceLineNonStyle, NSUUID;

@interface TSCHReferenceLineNonStyleItem : NSObject {

	TSCHReferenceLineNonStyle* mNonStyle;
	NSUUID* mUUID;

}

@property (nonatomic,retain) TSCHReferenceLineNonStyle * nonStyle; 
@property (nonatomic,readonly) NSUUID * uuid; 
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)uuid;
-(unsigned long long)hash;
-(id)description;
-(TSCHReferenceLineNonStyle *)nonStyle;
-(id)initWithNonStyle:(id)arg1 uuid:(id)arg2 ;
-(id)initFromUnarchiver:(id)arg1 message:(const ChartReferenceLineNonStyleItem*)arg2 ;
-(void)saveToArchiver:(id)arg1 message:(ChartReferenceLineNonStyleItem*)arg2 ;
-(void)setNonStyle:(TSCHReferenceLineNonStyle *)arg1 ;
@end
