/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol INHomeAttributeExport <NSObject,JSExport>
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long valueType; 
@property (assign,nonatomic) BOOL boolValue; 
@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,copy) NSString * stringValue; 
@required
-(long long)valueType;
-(void)setDoubleValue:(double)arg1;
-(BOOL)boolValue;
-(double)doubleValue;
-(void)setStringValue:(id)arg1;
-(NSString *)stringValue;
-(id)init;
-(long long)type;
-(void)setBoolValue:(BOOL)arg1;
-(void)setType:(long long)arg1;
-(void)setValueType:(long long)arg1;

@end

