/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol NFCISO15693Tag <NFCTag,NFCNDEFTag>
@property (nonatomic,copy,readonly) NSData * identifier; 
@property (nonatomic,readonly) unsigned long long icManufacturerCode; 
@property (nonatomic,copy,readonly) NSData * icSerialNumber; 
@required
-(NSData *)identifier;
-(void)sendCustomCommandWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)readMultipleBlocksWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)stayQuietWithCompletionHandler:(/*^block*/id)arg1;
-(void)readSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 completionHandler:(/*^block*/id)arg3;
-(void)writeSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 dataBlock:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)lockBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 completionHandler:(/*^block*/id)arg3;
-(void)readMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3;
-(void)writeMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(NSRange)arg2 dataBlocks:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)selectWithRequestFlags:(unsigned char)arg1 completionHandler:(/*^block*/id)arg2;
-(void)resetToReadyWithRequestFlags:(unsigned char)arg1 completionHandler:(/*^block*/id)arg2;
-(void)writeAFIWithRequestFlag:(unsigned char)arg1 afi:(unsigned char)arg2 completionHandler:(/*^block*/id)arg3;
-(void)lockAFIWithRequestFlag:(unsigned char)arg1 completionHandler:(/*^block*/id)arg2;
-(void)writeDSFIDWithRequestFlag:(unsigned char)arg1 dsfid:(unsigned char)arg2 completionHandler:(/*^block*/id)arg3;
-(void)lockDFSIDWithRequestFlag:(unsigned char)arg1 completionHandler:(/*^block*/id)arg2;
-(void)lockDSFIDWithRequestFlag:(unsigned char)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getSystemInfoWithRequestFlag:(unsigned char)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getSystemInfoAndUIDWithRequestFlag:(unsigned char)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)arg1 blockRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fastReadMultipleBlocksWithRequestFlag:(unsigned char)arg1 blockRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3;
-(void)customCommandWithRequestFlag:(unsigned char)arg1 customCommandCode:(long long)arg2 customRequestParameters:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)extendedReadSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)extendedWriteSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 dataBlock:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)extendedLockBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)extendedReadMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3;
-(void)extendedWriteMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(NSRange)arg2 dataBlocks:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)authenticateWithRequestFlags:(unsigned char)arg1 cryptoSuiteIdentifier:(long long)arg2 message:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)keyUpdateWithRequestFlags:(unsigned char)arg1 keyIdentifier:(long long)arg2 message:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)challengeWithRequestFlags:(unsigned char)arg1 cryptoSuiteIdentifier:(long long)arg2 message:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)readBufferWithRequestFlags:(unsigned char)arg1 completionHandler:(/*^block*/id)arg2;
-(void)extendedGetMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)arg1 blockRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3;
-(void)extendedFastReadMultipleBlocksWithRequestFlag:(unsigned char)arg1 blockRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3;
-(void)sendRequestWithFlag:(long long)arg1 commandCode:(long long)arg2 data:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(unsigned long long)icManufacturerCode;
-(NSData *)icSerialNumber;

@end

