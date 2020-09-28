/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSWPParagraphStyle, NSString, TSCH3DLabelBitmapContextInfo;

@interface TSCH3DLabelResourceAttributes : NSObject <NSCopying> {

	TSWPParagraphStyle* mParagraphStyle;
	NSString* mString;
	TSCH3DLabelBitmapContextInfo* mBitmapContextInfo;
	double mLabelWidth;
	double mRenderSamples;

}

@property (nonatomic,readonly) TSWPParagraphStyle * paragraphStyle; 
@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) TSCH3DLabelBitmapContextInfo * bitmapContextInfo; 
@property (nonatomic,readonly) double labelWidth; 
@property (nonatomic,readonly) double renderSamples; 
+(id)labelAttributesWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4 renderSamples:(double)arg5 ;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(double)labelWidth;
-(unsigned long long)hash;
-(id)description;
-(TSWPParagraphStyle *)paragraphStyle;
-(TSCH3DLabelBitmapContextInfo *)bitmapContextInfo;
-(double)renderSamples;
-(id)initWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4 renderSamples:(double)arg5 ;
@end
