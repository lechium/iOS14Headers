/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MeasureFoundation.framework/MeasureFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MeasureFoundation/MeasureFoundation.MeasureObject.h>

@class NSArray;

@interface MeasureFoundation.WorldPoint : MeasureFoundation.MeasureObject {

	 lines;
	 parentLine;
	 snapLine;
	 partOfRectangleId;
	 delegate;
	 anchor;
	 triangulationAnchor;
	 type;

}

@property (copy,nonatomic) NSArray * lines; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long state; 
-(NSArray *)lines;
-(void)setState:(long long)arg1 ;
-(id)init;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(long long)state;
-(void)setLines:(NSArray *)arg1 ;
@end
