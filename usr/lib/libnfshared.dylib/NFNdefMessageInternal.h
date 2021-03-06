/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NFNdefMessage.h>

@class NSArray, NSMutableArray, NSString;

@interface NFNdefMessageInternal : NSObject <NSSecureCoding, NFNdefMessage> {

	NSMutableArray* _records;

}

@property (nonatomic,readonly) NSArray * records; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)dataFromNDEFMessage:(id)arg1 ;
+(id)decodeFromNDEFMessage:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(NSArray *)records;
-(void)addRecord:(id)arg1 ;
-(id)init;
-(id)decode;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)asData;
-(NSString *)description;
-(id)initWithNDEFMessage:(id)arg1 ;
-(void)addRecordArray:(id)arg1 ;
@end

