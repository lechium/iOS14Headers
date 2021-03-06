/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSPort, NSMutableArray, NSArray;

@interface NSPortMessage : NSObject {

	NSPort* localPort;
	NSPort* remotePort;
	NSMutableArray* components;
	unsigned msgid;
	void* reserved2;
	void* reserved;

}

@property (copy,readonly) NSArray * components; 
@property (retain,readonly) NSPort * receivePort; 
@property (retain,readonly) NSPort * sendPort; 
@property (assign) unsigned msgid; 
-(unsigned)msgid;
-(NSPort *)sendPort;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMsgid:(unsigned)arg1 ;
-(NSArray *)components;
-(id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3 ;
-(id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3 ;
-(void)dealloc;
-(NSPort *)receivePort;
-(BOOL)sendBeforeDate:(id)arg1 ;
@end

