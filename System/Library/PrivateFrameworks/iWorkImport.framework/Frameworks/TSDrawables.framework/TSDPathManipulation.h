/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSDrawables/TSDrawables-Structs.h>
@interface TSDPathManipulation : NSObject {

	TSDPathManipulation* mPrecedingManipulation;

}
-(void)dealloc;
-(CGPathRef)manipulatePath:(CGPathRef)arg1 withLineWidth:(double)arg2 ;
-(BOOL)canDecomposeRectIntoParts;
-(id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void*)arg3 precedingManipulation:(id)arg4 ;
@end
