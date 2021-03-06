/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimePropertyDescriptor : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * value; 
@property (assign,nonatomic) BOOL writable; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * get; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * set; 
@property (assign,nonatomic) BOOL wasThrown; 
@property (assign,nonatomic) BOOL configurable; 
@property (assign,nonatomic) BOOL enumerable; 
@property (assign,nonatomic) BOOL isOwn; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * symbol; 
@property (assign,nonatomic) BOOL nativeGetter; 
-(void)setSet:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)set;
-(id)initWithName:(id)arg1 ;
-(BOOL)writable;
-(RWIProtocolRuntimeRemoteObject *)symbol;
-(void)setValue:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(BOOL)isOwn;
-(void)setConfigurable:(BOOL)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)value;
-(void)setName:(NSString *)arg1 ;
-(void)setSymbol:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)get;
-(void)setWritable:(BOOL)arg1 ;
-(NSString *)name;
-(void)setGet:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setWasThrown:(BOOL)arg1 ;
-(BOOL)wasThrown;
-(BOOL)configurable;
-(void)setEnumerable:(BOOL)arg1 ;
-(BOOL)enumerable;
-(void)setIsOwn:(BOOL)arg1 ;
-(void)setNativeGetter:(BOOL)arg1 ;
-(BOOL)nativeGetter;
@end

