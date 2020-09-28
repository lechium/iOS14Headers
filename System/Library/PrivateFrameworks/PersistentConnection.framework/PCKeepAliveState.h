/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PCKeepAliveState : NSObject {

	unsigned char _state;
	unsigned char _subState;

}

@property (assign,nonatomic) unsigned char state;                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned char subState;              //@synthesize subState=_subState - In the implementation block
-(id)initWithKeepAliveState:(unsigned char)arg1 subState:(unsigned char)arg2 ;
-(unsigned char)subState;
-(void)setState:(unsigned char)arg1 ;
-(void)setSubState:(unsigned char)arg1 ;
-(unsigned char)state;
@end
