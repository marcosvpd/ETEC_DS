package com.example.aluno.listview

import android.os.Bundle
import android.support.design.widget.Snackbar
import android.support.v7.app.AppCompatActivity
import android.view.Menu
import android.view.MenuItem
import android.widget.ArrayAdapter
import android.widget.ListView

import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val arrayLinhas = ArrayList<String>()
        arrayLinhas.add("Linha 1")
        arrayLinhas.add("Linha 2")
        arrayLinhas.add("Linha 3")
        arrayLinhas.add("Linha 4")

        val lv: ListView = findViewById(R.id.minhaprimeiralistview)
        lv.adapter = ArrayAdapter<String>(
                this,
                android.R.layout.simple_list_item_1,
                arrayLinhas)
        }
    }
