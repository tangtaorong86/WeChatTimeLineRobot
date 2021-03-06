/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IMMNewSessionMgrExt.h"
#import "IMsgExt.h"
#import "INewArrivalExt.h"
#import "ISessionStorageDelegate.h"
#import "MMService.h"
#import "MMKernelExt.h"
#import "IBottleMgrExt.h"
#import "MMService.h"
#import "IBottleContactMgrExt.h"

@class NSString, MMBaseSessionStorage, NSMutableDictionary;

@interface BottleSessionMgr : MMService <ISessionStorageDelegate, MMService, IBottleMgrExt, IMsgExt, INewArrivalExt, IBottleContactMgrExt, IMMNewSessionMgrExt, MMKernelExt> {
	MMBaseSessionStorage* m_sessionStorage;
	NSMutableDictionary* m_dictBottleId2CellData;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(id)getCacheDataFilePath;
-(id)getCacheValidInfoFilePath;
-(void)deleteOldVersionSessionCache;
-(id)importSessions;
-(void)deleteSessionAtIndex:(unsigned long)index backed:(BOOL)backed;
-(int)updateSessionInfo:(id)info;
-(void)updateCellData:(id)data;
-(id)sessionCellDataWithUsrName:(id)usrName;
-(id)sessionCellDataAtIndex:(unsigned long)index;
-(void)deleteAllSessions;
-(void)deleteSessionAtIndex:(unsigned long)index;
-(id)sessionInfoWithUsrName:(id)usrName;
-(id)sessionInfoAtIndex:(unsigned long)index;
-(unsigned long)sessionCount;
-(void)dealloc;
-(void)isUser:(id)user hasSpecalSessionInfo:(id*)info;
-(void)onDeleteSessionOfUser:(id)user;
-(void)isMessage:(id)message Handled:(BOOL*)handled;
-(void)isUser:(id)user Handled:(BOOL*)handled;
-(id)genMainFrameSessionInfo;
-(void)onSyncBottleContactEnd;
-(void)onModifyBottleContact:(id)contact;
-(void)onNewBottleContact:(id)contact;
-(void)onModifyContact:(id)contact;
-(void)OnThrowBack:(unsigned long)back;
-(void)OnUpdateBottle:(unsigned long)bottle;
-(void)OnUnReadCountChange:(id)change;
-(void)OnDelMsg:(id)msg;
-(void)OnModMsg:(id)msg MsgWrap:(id)wrap;
-(void)OnAddMsg:(id)msg MsgWrap:(id)wrap;
-(void)OnPreAddMsg:(id)msg MsgWrap:(id)wrap;
-(void)onBottleNewArrivalCountChange:(unsigned long)change;
-(BOOL)clearBottleNewArrivalCount:(id)count;
-(BOOL)zeroNewArrivalCount;
-(unsigned long)getNewArrivalCount;
-(id)getNewArrivalList;
-(void)OnDeleteSessionByBottle:(id)bottle;
-(id)GetLastMessage;
-(unsigned long)GetUnreadBottleCount;
-(unsigned long)GetTotalUnreadCount;
-(BOOL)onServiceMemoryWarning;
-(id)init;
-(void)fireListener:(int)listener withSessionInfo:(id)sessionInfo;
-(BOOL)isNeedShowInMainFrame;
-(void)displayPluginAtMainFrame:(BOOL)mainFrame;
-(void)syncAllContact;
-(void)checkAndSort;
-(id)toString:(unsigned long)string;
@end

