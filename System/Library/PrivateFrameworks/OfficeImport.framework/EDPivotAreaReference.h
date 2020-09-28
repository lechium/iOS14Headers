/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDPivotAreaReference : NSObject {

	BOOL mByPosition;
	BOOL mRelative;
	BOOL mSelected;
	unsigned long long mFieldId;
	unsigned long long mCount;

}
+(id)pivotAreaReference;
-(void)setSelected:(BOOL)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)fieldId;
-(unsigned long long)count;
-(void)setFieldId:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)selected;
-(BOOL)relative;
-(void)setRelative:(BOOL)arg1 ;
-(BOOL)byPosition;
-(void)setByPosition:(BOOL)arg1 ;
@end
