/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDCollection, EDReference;

@interface EDPivotArea : NSObject {

	BOOL mGrandCol;
	BOOL mGrandRow;
	BOOL mOutline;
	int mType;
	EDCollection* mReferences;
	EDReference* mOffset;

}
+(id)pivotArea;
-(id)references;
-(BOOL)outline;
-(void)setOffset:(id)arg1 ;
-(id)offset;
-(id)init;
-(int)type;
-(void)setOutline:(BOOL)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(BOOL)grandRow;
-(void)setGrandRow:(BOOL)arg1 ;
-(BOOL)grandCol;
-(void)setGrandCol:(BOOL)arg1 ;
@end

