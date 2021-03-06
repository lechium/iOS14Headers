/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CCVegaCSSStyleDeclaration, NSMutableArray, NSString, NSMutableDictionary;


@protocol CCVegaHTMLElementInterface <JSExport>
@property (nonatomic,retain) CCVegaCSSStyleDeclaration * style; 
@property (nonatomic,retain) NSMutableArray * childNodes; 
@property (nonatomic,retain) NSString * tagName; 
@property (nonatomic,retain) NSMutableDictionary * events; 
@property (nonatomic,retain) NSObject*<CCVegaHTMLElementInterface> parentNode; 
@property (assign,nonatomic) double clientWidth; 
@property (assign,nonatomic) double clientHeight; 
@optional
-(id)removeWithChild:(id)arg1 __JS_EXPORT_AS__removeChild:(id)arg2;
-(id)appendWithChild:(id)arg1 __JS_EXPORT_AS__appendChild:(id)arg2;
-(id)prependWithChild:(id)arg1 __JS_EXPORT_AS__prepend:(id)arg2;
-(void)setAttributeWithName:(id)arg1 value:(id)arg2 __JS_EXPORT_AS__setAttribute:(id)arg3;
-(void)addEventListenerWithType:(id)arg1 listener:(id)arg2 __JS_EXPORT_AS__addEventListener:(id)arg3;
-(void)removeEventListenerWithType:(id)arg1 listener:(id)arg2 __JS_EXPORT_AS__removeEventListener:(id)arg3;

@required
-(NSMutableDictionary *)events;
-(NSMutableArray *)childNodes;
-(double)clientWidth;
-(double)clientHeight;
-(void)setEvents:(id)arg1;
-(NSString *)tagName;
-(void)setParentNode:(id)arg1;
-(CCVegaCSSStyleDeclaration *)style;
-(void)setTagName:(id)arg1;
-(void)setChildNodes:(id)arg1;
-(NSObject*<CCVegaHTMLElementInterface>)parentNode;
-(void)setStyle:(id)arg1;
-(id)initWithTagName:(id)arg1;
-(void)setClientWidth:(double)arg1;
-(void)setClientHeight:(double)arg1;
-(void)recursiveSetSize:(CGSize)arg1;
-(id)getBoundingClientRect;
-(id)removeWithChild:(id)arg1;
-(id)appendWithChild:(id)arg1;
-(id)prependWithChild:(id)arg1;
-(void)setAttributeWithName:(id)arg1 value:(id)arg2;
-(void)addEventListenerWithType:(id)arg1 listener:(id)arg2;
-(void)removeEventListenerWithType:(id)arg1 listener:(id)arg2;

@end

