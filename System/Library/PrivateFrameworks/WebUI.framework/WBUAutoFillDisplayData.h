/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface WBUAutoFillDisplayData : NSObject {

	NSString* _label;
	NSArray* _fillMatches;

}

@property (nonatomic,retain) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * valueString; 
@property (nonatomic,readonly) NSString * property; 
@property (nonatomic,copy,readonly) NSArray * fillMatches;              //@synthesize fillMatches=_fillMatches - In the implementation block
-(NSString *)property;
-(NSArray *)fillMatches;
-(NSString *)valueString;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)addressStringForLabel:(id)arg1 ;
-(id)initWithLabel:(id)arg1 fillMatches:(id)arg2 ;
@end
