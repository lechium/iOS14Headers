/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, IKDOMNode;


@protocol IKJSDOMXPathResult <JSExport>
@property (nonatomic,readonly) long long resultType; 
@property (nonatomic,readonly) long long numberValue; 
@property (nonatomic,__weak,readonly) NSString * stringValue; 
@property (nonatomic,readonly) BOOL booleanValue; 
@property (nonatomic,__weak,readonly) IKDOMNode * singleNodeValue; 
@property (nonatomic,readonly) BOOL invalidIteratorState; 
@property (nonatomic,readonly) long long snapshotLength; 
@required
-(long long)resultType;
-(long long)numberValue;
-(NSString *)stringValue;
-(BOOL)booleanValue;
-(IKDOMNode *)singleNodeValue;
-(BOOL)invalidIteratorState;
-(long long)snapshotLength;
-(id)iterateNext;
-(id)snapshotItem:(long long)arg1;

@end
