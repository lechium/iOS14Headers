/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBObserverClientInterface
@required
-(void)removeSection:(id)arg1;
-(void)updateSectionInfo:(id)arg1;
-(void)noteBulletinsLoadedForSectionID:(id)arg1;
-(void)noteServerReceivedResponseForBulletin:(id)arg1;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
-(void)updateBulletin:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)updateGlobalSettings:(id)arg1;
-(void)getObserverDebugInfo:(/*^block*/id)arg1;

@end

