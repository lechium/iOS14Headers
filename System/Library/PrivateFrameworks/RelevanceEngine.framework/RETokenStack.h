/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REBacktrackingTokenBuffer.h>

@protocol RETokenBuffer;
@class NSMutableArray, REScriptToken, NSString;

@interface RETokenStack : NSObject <REBacktrackingTokenBuffer> {

	id<RETokenBuffer> _buffer;
	unsigned long long _position;
	NSMutableArray* _tokenStack;
	NSMutableArray* _positionStack;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) REScriptToken * currentToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)push;
-(void)consume;
-(void)pop;
-(BOOL)isEmpty;
-(void)next;
-(REScriptToken *)currentToken;
-(id)initWithTokenBuffer:(id)arg1 ;
@end

