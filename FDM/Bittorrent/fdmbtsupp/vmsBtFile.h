/*
  Free Download Manager Copyright (c) 2003-2007 FreeDownloadManager.ORG
*/

    

#pragma once

class vmsBtFile
{
public:
	virtual BOOL LoadFromFile (LPCSTR pszTorrentFile) = NULL;
	virtual BOOL LoadFromBuffer (LPBYTE pbTorrent, DWORD dwTorrentSize) = NULL;

	
	virtual int get_FileCount () = NULL;
	
	virtual void get_FileName (int nIndex, LPSTR pszRes) = NULL;
	virtual UINT64 get_FileSize (int nIndex) = NULL;
	
	virtual UINT64 get_TotalFilesSize () = NULL;
	
	virtual void get_TorrentName (LPSTR pszRes) = NULL;
	
	virtual BOOL get_TorrentBuffer (LPBYTE pbRes, DWORD dwSize, DWORD *pdwTorrentSize) = NULL;
	
	virtual void get_InfoHash (LPSTR pszRes) = NULL;
	
	virtual void get_TrackerUrl (LPSTR pszRes, int nIndex) = NULL;
	
	virtual int get_TrackerCount () = NULL;
	
	virtual void get_TorrentComment (LPSTR pszRes) = NULL;
	virtual int get_PieceCount () = NULL;
	virtual int get_PieceSize () = NULL;

	virtual void Release () = NULL;
};
