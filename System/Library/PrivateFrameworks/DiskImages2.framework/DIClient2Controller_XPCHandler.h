/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiskImages2/DIBaseXPCHandler.h>

@interface DIClient2Controller_XPCHandler : DIBaseXPCHandler
-(id)remoteObjectInterface;
-(id)serviceName;
-(BOOL)connectWithLogsForwarding:(long long)arg1 error:(id*)arg2 ;
-(id)newAttachWithParams:(id)arg1 error:(id*)arg2 ;
-(BOOL)getPassphraseFromGUIWithOpObj:(id)arg1 error:(id*)arg2 ;
-(BOOL)getPassphraseFromKeychainWithOpObj:(id)arg1 error:(id*)arg2 ;
@end
