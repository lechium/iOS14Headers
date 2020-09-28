/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSSelectorList : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * selectors; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) RWIProtocolCSSSourceRange * range; 
+(id)safe_initWithSelectors:(id)arg1 text:(id)arg2 ;
+(id)ik_cssSelectorListFromSelectorList:(id)arg1 forStyleMarkup:(id)arg2 withNewLineIndexSet:(id)arg3 ;
-(RWIProtocolCSSSourceRange *)range;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
-(NSArray *)selectors;
-(void)setSelectors:(NSArray *)arg1 ;
-(id)initWithSelectors:(id)arg1 text:(id)arg2 ;
@end
