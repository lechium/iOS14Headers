/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:41 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUEncodedBlockInfo.h>

@class NSString;

@interface TSUEncodedBlockInfoInternal : NSObject <TSUEncodedBlockInfo> {

	unsigned long long _encodedLength;

}

@property (nonatomic,readonly) unsigned long long encodedLength;              //@synthesize encodedLength=_encodedLength - In the implementation block
@property (nonatomic,readonly) unsigned long long decodedLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)encodedLength;
-(unsigned long long)decodedLength;
-(id)initWithEncodedLength:(unsigned long long)arg1 ;
@end

