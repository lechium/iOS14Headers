/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSSelector : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSArray * specificity; 
@property (assign,nonatomic) BOOL dynamic; 
+(id)safe_initWithText:(id)arg1 ;
-(void)setSpecificity:(NSArray *)arg1 ;
-(NSArray *)specificity;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)dynamic;
-(void)setDynamic:(BOOL)arg1 ;
-(id)initWithText:(id)arg1 ;
@end
