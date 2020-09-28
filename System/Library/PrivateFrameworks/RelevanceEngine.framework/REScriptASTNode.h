/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REScriptToken, NSSet;

@interface REScriptASTNode : NSObject {

	REScriptToken* _token;

}

@property (nonatomic,readonly) REScriptToken * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSSet * dependencies; 
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(id)initWithToken:(id)arg1 ;
-(NSSet *)dependencies;
-(REScriptToken *)token;
@end
