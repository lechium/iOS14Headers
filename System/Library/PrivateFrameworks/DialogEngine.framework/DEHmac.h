/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@class NSData;

@interface DEHmac : NSObject <DEWriter> {

	NSData* _hmac;
	SCD_Struct_DE2 _context;

}

@property (assign,nonatomic) SCD_Struct_DE2 context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSData * hmac;                       //@synthesize hmac=_hmac - In the implementation block
+(BOOL)verify:(id)arg1 computed:(id)arg2 ;
-(NSData *)hmac;
-(void)close;
-(void)setContext:(SCD_Struct_DE2)arg1 ;
-(SCD_Struct_DE2)context;
-(id)initWithKey:(id)arg1 iv:(id)arg2 ;
-(void)setHmac:(NSData *)arg1 ;
-(void)writeData:(id)arg1 ;
@end
